 /* Copyright 2021 still <stillconfusing@gmail.com>
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */ 

#include QMK_KEYBOARD_H
#include "my_keycodes.h"

#define RGB_BASE_COLOR 128, 255, 111
#define HSV_cORANGE 10, 255, 255

#define LAYER_LED 11
#define LAYER_LED_COUNT 2

enum RGB_LAYERS { FN1, FN2, FN3, NUM, CAPS, BLNK, RGB_NO, RGB_YES };

const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_GREEN},
    {14, 2, HSV_GREEN}
);

// fn layer's rgb
const rgblight_segment_t PROGMEM fn1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LAYER_LED, LAYER_LED_COUNT, HSV_RED}
);

const rgblight_segment_t PROGMEM fn2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LAYER_LED, LAYER_LED_COUNT, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM fn3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LAYER_LED, LAYER_LED_COUNT, HSV_cORANGE}
);

const rgblight_segment_t PROGMEM num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {10, 1, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM blank[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 18, HSV_BLACK}
);

const rgblight_segment_t PROGMEM rgb_no[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 18, HSV_RED}
);

const rgblight_segment_t PROGMEM rgb_yes[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 18, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    fn1_layer,
    fn2_layer,
    fn3_layer,
    num_layer,
    my_capslock_layer,
    blank,
    rgb_no,
    rgb_yes
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
    rgblight_sethsv(RGB_BASE_COLOR);
}

static bool lastCaps = 0;
bool led_update_user(led_t led_state) {
    if (led_state.caps_lock && !lastCaps){
        // rgblight_blink_layer_repeat(BLNK, 175, 2);
        lastCaps = 1;
    } else {
        lastCaps = led_state.caps_lock;
    }
    rgblight_set_layer_state(CAPS, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(FN1, layer_state_cmp(state, _FN));
    rgblight_set_layer_state(FN2, layer_state_cmp(state, _SMACRO));
    rgblight_set_layer_state(FN3, layer_state_cmp(state, _TOGG));
    rgblight_set_layer_state(NUM, layer_state_cmp(state, _NUM));

    return state;
}

// Backlight timeout feature
#define BACKLIGHT_TIMEOUT 5    // in minutes
static uint16_t idle_timer = 0;
static uint8_t halfmin_counter = 0;
static uint8_t old_backlight_level = -1; 
static uint8_t old_rgb_value = -1; 
static bool led_on = true;
static bool rgb_on = true;

void matrix_scan_user(void) {
  // idle_timer needs to be set one time
    if (idle_timer == 0) idle_timer = timer_read();

    #ifdef BACKLIGHT_ENABLE
        if ( (led_on && timer_elapsed(idle_timer) > 30000) || (rgb_on && timer_elapsed(idle_timer) > 30000)) {
            halfmin_counter++;
            idle_timer = timer_read();
        }

        if ( (led_on && halfmin_counter >= BACKLIGHT_TIMEOUT * 2) || (rgb_on && halfmin_counter >= BACKLIGHT_TIMEOUT * 2)) {
            old_backlight_level = get_backlight_level();
			//old_rgb_hsv[0] = rgblight_get_hue(); 
			//old_rgb_hsv[1] = rgblight_get_sat();
			//old_rgb_hsv[2] = rgblight_get_val();
            backlight_set(0);
			rgblight_disable_noeeprom();
            led_on = false; 
			rgb_on = false;
            halfmin_counter = 0;
        }
    #endif
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
        #ifdef BACKLIGHT_ENABLE
            if (led_on == false || old_backlight_level == -1 || rgb_on == false || old_rgb_value == -1) {
                if (old_backlight_level == -1) old_backlight_level = get_backlight_level();
	    	if (old_rgb_value == -1) old_rgb_value = 1;
	     	old_rgb_value = 1;
		    rgblight_enable_noeeprom();
            backlight_set(old_backlight_level); 
				
           led_on = true;
		   rgb_on = true;
				
				
            }
        #endif
        idle_timer = timer_read();
        halfmin_counter = 0;
    }
    switch (keycode) {
        case pHSV:
            if (record->event.pressed){
                char hue[4];
                itoa(rgblight_get_hue(), hue, 10);
                hue[3] = '\0';
                send_string(hue);
                SEND_STRING(", ");
                char sat[4];
                itoa(rgblight_get_sat(), sat, 10);
                sat[3] = '\0';
                send_string(sat);
                SEND_STRING(", ");
                char val[4];
                itoa(rgblight_get_val(), val, 10);
                val[3] = '\0';
                send_string(val);
                SEND_STRING(" ");
            }
        return true;
    default:
        return true;
    }
}

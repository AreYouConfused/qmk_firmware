/*
Copyright 2021 John <stillconfusing@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "my_keycodes.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_QWERTY] = LAYOUT(
        KC_ESC,              KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,       KC_F12,    KC_PSCR,  KC_SCROLLLOCK,  KC_PAUSE,
        KC_GRV,              KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,       KC_MINS,      KC_EQL,    KC_BSPC,           KC_HOME,
        KC_TAB,              KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_LBRC,      KC_RBRC,   KC_BSLS,           KC_END,
        LT(_CAPS, KC_CAPS),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN ,   KC_QUOT,      KC_ENT,                       KC_PGUP,
        KC_LSFT,             KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,    KC_RSFT,                 KC_UP,             KC_PGDN,
        KC_LCTL,             KC_LGUI,  KC_LALT,                  KC_SPC,                           KC_RALT,  MO(_FN),  KC_RCTL,     KC_LEFT,   KC_DOWN,           KC_RGHT
    ),

    [_CAPS] = LAYOUT(
        HYPR(KC_ESC),            HYPR(KC_F1),    HYPR(KC_F2),    HYPR(KC_F3),    HYPR(KC_F4),    HYPR(KC_F5),    HYPR(KC_F6),    HYPR(KC_F7),    HYPR(KC_F8),    HYPR(KC_F9),    HYPR(KC_F10),     HYPR(KC_F11),       HYPR(KC_F12),    HYPR(KC_PSCR),  HYPR(KC_SCROLLLOCK),  HYPR(KC_PAUSE),
        HYPR(KC_GRV),            KC_MUTE,       KC_VOLD,       KC_VOLU,     HYPR(KC_4),     HYPR(KC_5),     HYPR(KC_6),     HYPR(KC_7),     HYPR(KC_8),     HYPR(KC_9),     HYPR(KC_0),       HYPR(KC_MINS),      HYPR(KC_EQL),    KC_DEL,           HYPR(KC_HOME),
        HYPR(KC_TAB),            KC_MPRV,       KC_MNXT,       KC_MPLY,     HYPR(KC_R),     HYPR(KC_T),     HYPR(KC_Y),     HYPR(KC_U),     HYPR(KC_I),     HYPR(KC_O),     HYPR(KC_P),       HYPR(KC_LBRC),      HYPR(KC_RBRC),   HYPR(KC_BSLS),           HYPR(KC_END),
        KC_TRNS,                HYPR(KC_A),     HYPR(KC_S),     HYPR(KC_D),     HYPR(KC_F),     HYPR(KC_G),     HYPR(KC_H),     HYPR(KC_J),     HYPR(KC_K),     HYPR(KC_L),     HYPR(KC_SCLN ),   HYPR(KC_QUOT),      HYPR(KC_ENT),                       HYPR(KC_PGUP),
        KC_TRNS,           HYPR(KC_Z),     HYPR(KC_X),     HYPR(KC_C),     HYPR(KC_V),     HYPR(KC_B),     HYPR(KC_N),     HYPR(KC_M),     HYPR(KC_COMM),  HYPR(KC_DOT),   HYPR(KC_SLSH),    HYPR(KC_RSFT),                 HYPR(KC_UP),             HYPR(KC_PGDN),
        KC_TRNS,           KC_TRNS,  KC_TRNS,                  HYPR(KC_SPC),                           KC_TRNS,  KC_TRNS,  KC_TRNS,                                                              HYPR(KC_LEFT),   HYPR(KC_DOWN),           HYPR(KC_RGHT)
    ),
    
    [_FN] = LAYOUT(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_END,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_MNXT,       KC_TRNS,                 KC_TRNS,
        KC_TRNS,  RGB_HUI,  RGB_SAI,  RGB_VAI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_MPLY,                      KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                                KC_TRNS,  KC_TRNS,  OSL(_TOGG),            KC_TRNS,  KC_TRNS,  KC_TRNS
    ),

    [_TOGG] = LAYOUT(
        RESET,    RGB_TOG,  pHSV,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            TG(_TOGG),
        KC_TRNS,  KC_TRNS,  KC_TRNS,  die,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS,                 KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  Mock,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                                KC_TRNS,  TG(_TOGG),  TG(_TOGG),            KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
};

#define RGB_BASE_COLOR 0, 255, 160
#define HSV_cORANGE 10, 255, 255

#define LAYER_LED 11
#define LAYER_LED_COUNT 2

bool is_sponge_active = false;
bool is_dying_active = false;
bool last_die = false;

enum RGB_LAYERS { FN1, FN2, FN3, NUM, CAPS, MOCK, DIE, BLNK, RGB_NO, RGB_YES };

const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_GREEN},
    {14, 2, HSV_GREEN}
);

const rgblight_segment_t PROGMEM mock_rgb[] = RGBLIGHT_LAYER_SEGMENTS(
    {6, 3, HSV_CYAN}
);

const rgblight_segment_t PROGMEM die_rgb[] = RGBLIGHT_LAYER_SEGMENTS(
    {6, 3, HSV_PURPLE}
);

// fn layer's rgb
const rgblight_segment_t PROGMEM fn1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {LAYER_LED, LAYER_LED_COUNT, HSV_BLUE}
);

const rgblight_segment_t PROGMEM fn2_layer[] = RGBLIGHT_LAYER_SEGMENTS( {LAYER_LED, LAYER_LED_COUNT, HSV_ORANGE}
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
    mock_rgb,
    die_rgb,
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
    //rgblight_set_layer_state(FN1, layer_state_cmp(state, _FN));
    //rgblight_set_layer_state(FN2, layer_state_cmp(state, _SMACRO));
    rgblight_set_layer_state(FN3, layer_state_cmp(state, _TOGG));
    //rgblight_set_layer_state(NUM, layer_state_cmp(state, _CAPS));
    
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

// random bool
bool random_bool(void) {
    bool rbool = rand() & 1;
    return rbool;
}


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
    case KC_A ... KC_Z: 
            if (is_sponge_active && record->event.pressed) {
                if (random_bool()) {
                    register_code(KC_LSHIFT);
                }
            }
            if (is_dying_active && record->event.pressed) {
                if (last_die) {
                    register_code(KC_LSHIFT);
                }
                last_die = !last_die;
            }
            return true;
    case KC_ESC:
            is_dying_active = false;
            is_sponge_active = false;
            return true;
    case Mock:
            is_sponge_active = !is_sponge_active;
            is_dying_active = false;
            return true;
    case die: 
            is_dying_active = !is_dying_active;
            is_sponge_active = false;
            return true;
    default:
        return true;
    }
    return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_A ... KC_Z: {
            if ((is_sponge_active || (is_dying_active && !last_die)) && record->event.pressed) {
                unregister_code(KC_LSHIFT);
            }
        }
    }
    rgblight_set_layer_state(MOCK, is_sponge_active);
    rgblight_set_layer_state(DIE, is_dying_active);

}


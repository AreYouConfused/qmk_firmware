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
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,       KC_F12,    KC_HOME,  KC_END,  KC_DEL,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,       KC_MINS,      KC_EQL,    KC_BSPC,           KC_PSCR,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_LBRC,      KC_RBRC,   KC_BSLS,           TG(_NUM),
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN ,   KC_QUOT,      KC_ENT,                       KC_PGUP,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,    KC_RSFT,                 KC_UP,             KC_PGDN,
        KC_LCTL,  KC_LGUI,  KC_LALT,                  KC_SPC,                           KC_RALT,  MO(_FN),  LT(_SMACRO, KC_RCTL),     KC_LEFT,   KC_DOWN,           KC_RGHT
    ),

    [_NUM] = LAYOUT(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_KP_SLASH,  KC_KP_ASTERISK,  KC_KP_MINUS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_KP_7,  KC_KP_8,      KC_KP_9,         KC_KP_PLUS,   KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_KP_4,  KC_KP_5,      KC_KP_6,         KC_KP_PLUS,   KC_TRNS,  KC_TRNS,  KC_TRNS,            TG(_NUM),
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_KP_1,  KC_KP_2,      KC_KP_3,         KC_KP_ENTER,  KC_TRNS,  KC_TRNS,                      KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_KP_0,      KC_KP_DOT,         KC_KP_ENTER,  KC_TRNS,                      KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                      KC_TRNS,      KC_TRNS,         KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    
    [_FN] = LAYOUT(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_MNXT,       KC_TRNS,                 KC_TRNS,
        KC_TRNS,  RGB_HUI,  RGB_SAI,  RGB_VAI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_MPLY,                      KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                                KC_TRNS,  KC_TRNS,  OSL(_TOGG),            KC_TRNS,  KC_TRNS,  KC_TRNS
    ),

    [_SMACRO] = LAYOUT(
        HYPR(KC_ESC),   HYPR(KC_F1),    HYPR(KC_F2),    HYPR(KC_F3),    HYPR(KC_F4),    HYPR(KC_F5),    HYPR(KC_F6),    HYPR(KC_F7),    HYPR(KC_F8),    HYPR(KC_F9),    HYPR(KC_F10),   HYPR(KC_F11),   HYPR(KC_F12),   HYPR(KC_HOME),  HYPR(KC_END),  HYPR(KC_DEL),
        HYPR(KC_GRV),   HYPR(KC_1),     HYPR(KC_2),     HYPR(KC_3),     HYPR(KC_4),     HYPR(KC_5),     HYPR(KC_6),     HYPR(KC_7),     HYPR(KC_8),     HYPR(KC_9),     HYPR(KC_0),     HYPR(KC_MINS),  HYPR(KC_EQL),      HYPR(KC_BSPC),        HYPR(KC_PSCR),
        HYPR(KC_TAB),   HYPR(KC_Q),     HYPR(KC_W),     HYPR(KC_E),     HYPR(KC_R),     HYPR(KC_T),     HYPR(KC_Y),     HYPR(KC_U),     HYPR(KC_I),     HYPR(KC_O),     HYPR(KC_P),     HYPR(KC_LBRC),  HYPR(KC_RBRC),    HYPR(KC_BSLS),       KC_TRNS,
        HYPR(KC_CAPS),  HYPR(KC_A),     HYPR(KC_S),     HYPR(KC_D),     HYPR(KC_F),     HYPR(KC_G),     HYPR(KC_H),     HYPR(KC_J),     HYPR(KC_K),     HYPR(KC_L),     HYPR(KC_SCLN),   HYPR(KC_QUOT),        HYPR(KC_ENT),             HYPR(KC_PGUP),
        HYPR(KC_LSFT),  HYPR(KC_Z),     HYPR(KC_X),     HYPR(KC_C),     HYPR(KC_V),     HYPR(KC_B),     HYPR(KC_N),     HYPR(KC_M),     HYPR(KC_COMM),  HYPR(KC_DOT),   HYPR(KC_SLSH),    HYPR(KC_RSFT),              HYPR(KC_UP),    HYPR(KC_PGDN),
        HYPR(KC_LCTL),  HYPR(KC_LGUI),  HYPR(KC_LALT),                  HYPR(KC_SPC),                                   HYPR(KC_RALT),  TG(_SMACRO),    TG(_SMACRO),              HYPR(KC_LEFT),   HYPR(KC_DOWN),   HYPR(KC_RGHT)
    ),

    [_TOGG] = LAYOUT(
        RESET,    RGB_TOG,  pHSV,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            TG(_TOGG),
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS,                 KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                                KC_TRNS,  TG(_TOGG),  TG(_TOGG),            KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
};


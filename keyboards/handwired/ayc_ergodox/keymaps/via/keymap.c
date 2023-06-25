// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ergodox(
    // ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐    ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_MINUS,     KC_EQUAL, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,           KC_NO,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    // ├────────┼────────┼────────┼────────┼────────┼────────┤        │    │        ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  /*───────┤    ├───────*/ KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    // ├────────┼────────┼────────┼────────┼────────┼────────┤        │    │        ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,         KC_NO,    KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    // ├────────┼────────┼────────┼────────┼────────┴────────┴────────┘    └────────┴────────┴────────┼────────┼────────┼────────┼────────┤
        KC_LCTL, KC_LGUI, KC_LALT,  KC_NO,                                                             KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,
    // └────────┴────────┴────────┴────────┘                                                          └────────┴────────┴────────┴────────┘
    //                                              ┌────────┬────────┐    ┌────────┬────────┐
                                                       KC_NO,   KC_NO,       KC_RALT, KC_NO,
    //                                     ┌────────┼────────┼────────┤    ├────────┼────────┼────────┐
                                                              KC_PGUP,      KC_PGDN,
    //                            ┌────────┤        │        ├────────┤    ├────────┤        │        ├────────┐
                                   KC_LALT, KC_SPC,  KC_LSFT, KC_LGUI,       KC_RCTL, KC_ENT, KC_BSPC,  KC_NO
    //                            └────────┴────────┴────────┴────────┘    └────────┴────────┴────────┴────────┘
    ),
};

//[99] = LAYOUT_ergodox(
//    // ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐    ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
//        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//    // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
//        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//    // ├────────┼────────┼────────┼────────┼────────┼────────┤        │    │        ├────────┼────────┼────────┼────────┼────────┼────────┤
//        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/*───────┤    ├───────*/KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//    // ├────────┼────────┼────────┼────────┼────────┼────────┤        │    │        ├────────┼────────┼────────┼────────┼────────┼────────┤
//        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//    // ├────────┼────────┼────────┼────────┼────────┼────────┴────────┘    └────────┴────────┼────────┼────────┼────────┼────────┼────────┤
//        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//    // └────────┴────────┴────────┴────────┴────────┘                                        └────────┴────────┴────────┴────────┴────────┘
//    //                                              ┌────────┬────────┐    ┌────────┬────────┐
//                                                     KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS,
//    //                                     ┌────────┼────────┼────────┤    ├────────┼────────┼────────┐
//                                                              KC_TRNS,      KC_TRNS,
//    //                                     │        │        ┼────────┤    ├────────┼        │        │
//                                            KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,  KC_TRNS
//    //                                     └────────┴────────┴────────┘    └────────┴────────┴────────┘
//    ),

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t escape_shifted_caps = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, KC_CAPS);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &escape_shifted_caps,
    NULL // Null terminate the array of overrides!
};

#include QMK_KEYBOARD_H

enum layernames{
    QWERTY,
    SYMBOLS,
    FN_1,
    FN_2,
};

#define LHFN MO(FN_1)
#define RHFN MO(FN_2)
#define SYM MO(SYMBOLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[QWERTY] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                KC_8,    KC_9,    KC_0,   KC_MINS, KC_EQL, KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_6,                              KC_7,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    SYM,                               SYM,     KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   LHFN,    KC_LALT,        KC_HOME,  KC_ESC,   KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_LGUI, KC_LALT,   KC_NO,       KC_LALT,     KC_SPC, KC_LGUI,         KC_ENT, KC_BSPC,       RHFN,       KC_RALT, KC_RGUI,  KC_APP,  KC_RCTL
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
	[SYMBOLS] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
       QK_BOOT,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                                               KC_F8,    KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_EXLM,  KC_AT,  KC_LCBR, KC_RCBR, KC_PIPE,  KC_F6,                             KC_F7,  KC_PSLS,  KC_P7,   KC_P8,   KC_P9,  KC_PMNS,  KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_HASH, KC_DLR,  KC_LBRC, KC_RBRC, KC_GRV,   KC_TRNS,                          KC_TRNS, KC_PAST,  KC_P4,   KC_P5,   KC_P6,  KC_PPLS,  KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, KC_TILD, KC_TRNS, KC_TRNS,         KC_PGUP, KC_PGDN,  KC_NO,   KC_P1,   KC_P2,   KC_P3,  KC_PENT,  KC_NO,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,    KC_TRNS, KC_TRNS,         KC_HOME, KC_END,       KC_P0,        KC_P0,  KC_PDOT, KC_PENT,  KC_NO
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
	[FN_1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_NO,   KC_NO,  KC_MUTE, KC_VOLD, KC_VOLU,  KC_NO,                                               KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_NO,   KC_NO,  KC_MPRV, KC_MNXT, KC_MPLY,  KC_NO,  KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
        KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,       KC_NO,  KC_NO,           KC_NO,   KC_NO,       KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
    [FN_2] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_NO,   KC_NO,   KC_NO,  KC_MS_U,  KC_NO,  KC_WH_U, KC_TRNS,                           KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS,  KC_NO,  KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS,                           KC_TRNS, KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT,  KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_TRNS, KC_TRNS,         KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
       KC_TRNS, KC_TRNS, KC_TRNS,  KC_NO,       KC_TRNS,     KC_BTN1, KC_BTN2,         KC_TRNS, KC_TRNS,     KC_TRNS,       KC_NO,   KC_NO,   KC_NO,   KC_NO
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    )
};


const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t escape_shifted_caps = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, KC_CAPS);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &escape_shifted_caps,
    NULL // Null terminate the array of overrides!
};

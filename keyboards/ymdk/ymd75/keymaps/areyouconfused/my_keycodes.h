#pragma once

#include QMK_KEYBOARD_H

enum layers {
	_QWERTY,
        _CAPS,
	_FN,
	_SMACRO,
	_TOGG
};

enum custom_keycodes{
    pHSV = SAFE_RANGE,
    Mock,
    die,
};

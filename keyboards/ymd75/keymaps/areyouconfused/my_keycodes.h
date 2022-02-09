#pragma once

#include QMK_KEYBOARD_H

enum layers {
	_QWERTY,
        _NUM,
	_FN,
	_SMACRO,
	_TOGG
};

enum custom_keycodes{
    pHSV = SAFE_RANGE,
    Mock,
};

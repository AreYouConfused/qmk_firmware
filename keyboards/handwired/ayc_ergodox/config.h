// Copyright 2023 Still (@Still)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define EE_HANDS
#define USE_I2C

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define BOOTMAGIC_LITE_ROW_RIGHT 5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 7

#define IGNORE_MOD_TAP_INTERRUPT

#define LAYOUT_ergodox(                                                                         \
                                                                                                \
    k00,k01,k02,k03,k04,k05,k06,            k09,k0A,k0B,k0C,k0D,k0E,k0F,                        \
    k10,k11,k12,k13,k14,k15,k16,            k19,k1A,k1B,k1C,k1D,k1E,k1F,                        \
    k20,k21,k22,k23,k24,k25,                    k2A,k2B,k2C,k2D,k2E,k2F,                        \
    k30,k31,k32,k33,k34,k35,k26,            k29,k3A,k3B,k3C,k3D,k3E,k3F,                        \
    k40,k41,k42,k43,                                    k4C,k4D,k4E,k4F,                        \
                            k36,k27,    k28,k39,                                                \
                                k37,    k38,                                                    \
                    k44,k45,k46,k47,    k48,k49,k4A,k4B)                                        \
                                                                \
                                                                \
   /* matrix positions */                                       \
   {                                                            \
    {k00,k01,k02,k03,k04,k05,k06,KC_NO},                        \
    {k10,k11,k12,k13,k14,k15,k16,KC_NO},                        \
    {k20,k21,k22,k23,k24,k25,k26,k27,},                         \
    {k30,k31,k32,k33,k34,k35,k36,k37,},                         \
    {k40,k41,k42,k43,k44,k45,k46,k47,},                         \
                                                                \
    {KC_NO,k09,k0A,k0B,k0C,k0D,k0E,k0F},                        \
    {KC_NO,k19,k1A,k1B,k1C,k1D,k1E,k1F},                        \
    {k28,  k29,k2A,k2B,k2C,k2D,k2E,k2F},                        \
    {k38,  k39,k3A,k3B,k3C,k3D,k3E,k3F},                        \
    {k48,  k49,k4A,k4B,k4C,k4D,k4E,k4F}                         \
                                                                \
   }

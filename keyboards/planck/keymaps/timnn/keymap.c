/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"


enum timnn_layers {
  _letters,
  _special,
  _control,
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
};

#define CT_SPEC MO(_special)
#define CT_CTRL MO(_control)

#define CT_RST RESET

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_letters] = LAYOUT_planck_grid(
    KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_MINS,
    KC_TAB,  KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    KC_NO,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SCLN, KC_NO,
    CT_CTRL, KC_NO,   KC_NO,   KC_NO,   CT_SPEC, KC_LSFT, KC_BSPC, KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_NO
),

[_special] = LAYOUT_planck_grid(
    KC_TRNS, KC_PERC, KC_SLSH, KC_LPRN, KC_RPRN, KC_CIRC, KC_AT,   KC_3,    KC_4,    KC_6,    KC_8,    KC_TILD,
    KC_TRNS, KC_QUES, KC_AMPR, KC_PLUS, KC_EQL,  KC_BSLS, KC_GRV,  KC_1,    KC_2,    KC_5,    KC_0,    KC_TRNS,
    KC_NO,   KC_EXLM, KC_PIPE, KC_MINS, KC_ASTR, KC_DLR,  KC_HASH, KC_7,    KC_TRNS, KC_TRNS, KC_9,    KC_NO,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO
),

[_control] = LAYOUT_planck_grid(
    CT_RST,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
)

};

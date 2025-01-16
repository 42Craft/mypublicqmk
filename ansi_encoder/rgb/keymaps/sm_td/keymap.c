/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

enum custom_keycodes {
    CKC_A = SAFE_RANGE, // reads as C(ustom) + KC_A, but you may give any name here
    CKC_S,
    CKC_D,
    CKC_F,
    CKC_SCLN,
    CKC_L,
    CKC_K,
    CKC_J,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_90_ansi(
        KC_MUTE,    KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,   RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_INS,             KC_DEL,
        MC_1,       KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        MC_2,       KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        MC_3,       KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        MC_4,       KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,
        MC_5,       KC_LCTL,  KC_LOPTN,           KC_LCMMD, KC_SPC,  MO(MAC_FN),           KC_SPC,             KC_RCMMD,           KC_RCTL,            KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_90_ansi(
        RGB_TOG,    _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,            _______,
        _______,    _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,    RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,    _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,   _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,    _______,            _______,  _______,  _______,  _______,   BAT_LVL,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,    _______,  _______,            _______,  _______,  _______,             _______,            _______,            _______,            _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_90_ansi(
        KC_MUTE,    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,             KC_DEL,
        MC_1,       KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        MC_2,       KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        MC_3,       KC_CAPS,  CKC_A,    CKC_S,    CKC_D,    CKC_F,    KC_G,      KC_H,     CKC_J,    CKC_K,    CKC_L,    CKC_SCLN, KC_QUOT,            KC_ENT,             KC_HOME,
        MC_4,       KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,
        MC_5,       KC_LCTL,  KC_LWIN,            KC_LALT,  KC_SPC,  MO(WIN_FN),           KC_SPC,             KC_RALT,            KC_RCTL,            KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_90_ansi(
        RGB_TOG,    _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,   RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,   KC_VOLU,  _______,            _______,
        _______,    _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,    RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,    _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,   _______,  _______,  _______,  _______,  _______,  _______,             _______,            _______,
        _______,    _______,            _______,  _______,  _______,  _______,   BAT_LVL,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,   _______,  _______,  _______,
        _______,    _______,  _______,            _______,  _______,  _______,             _______,            _______,            _______,             _______,  _______,  _______),
};
// clang-format on

#include "sm_td.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_smtd(keycode, record)) {
        return false;
    }
    // your code here
    return true;
}

smtd_resolution on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
    switch (keycode) {
        SMTD_MT_ON_MKEY(CKC_A, KC_A, KC_LEFT_GUI)
        SMTD_MT_ON_MKEY(CKC_S, KC_S, KC_LEFT_ALT)
        SMTD_MT_ON_MKEY(CKC_D, KC_D, KC_LEFT_CTRL)
        SMTD_MT_ON_MKEY(CKC_F, KC_F, KC_LSFT)
        SMTD_MT_ON_MKEY(CKC_SCLN, KC_SCLN, KC_LEFT_GUI)
        SMTD_MT_ON_MKEY(CKC_L, KC_L, KC_LEFT_ALT)
        SMTD_MT_ON_MKEY(CKC_K, KC_K, KC_LEFT_CTRL)
        SMTD_MT_ON_MKEY(CKC_J, KC_J, KC_LSFT)
    }

    return SMTD_RESOLUTION_UNHANDLED;
}

uint32_t get_smtd_timeout(uint16_t keycode, smtd_timeout timeout) {
    if (keycode == CKC_A && timeout == SMTD_TIMEOUT_TAP) return 300;
    if (keycode == CKC_A && timeout == SMTD_TIMEOUT_RELEASE) return 5;
    if (keycode == CKC_S && timeout == SMTD_TIMEOUT_RELEASE) return 5;
    if (keycode == CKC_D && timeout == SMTD_TIMEOUT_RELEASE) return 5;
    if (keycode == CKC_F && timeout == SMTD_TIMEOUT_RELEASE) return 15;
    if (keycode == CKC_J && timeout == SMTD_TIMEOUT_RELEASE) return 15;
    if (keycode == CKC_K && timeout == SMTD_TIMEOUT_RELEASE) return 30;
    if (keycode == CKC_L && timeout == SMTD_TIMEOUT_RELEASE) return 15;
    if (keycode == CKC_SCLN && timeout == SMTD_TIMEOUT_RELEASE) return 10;
    return get_smtd_timeout_default(timeout);
}

enum layers{
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
};
#endif // ENCODER_MAP_ENABLE

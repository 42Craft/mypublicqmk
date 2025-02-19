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

#pragma once

#ifdef RGB_MATRIX_ENABLE
/* RGB Matrix Driver Configuration */
#    define DRIVER_COUNT 2
#    define DRIVER_ADDR_1 0b1110111
#    define DRIVER_ADDR_2 0b1110100

/* RGB Matrix Configuration */
#    define DRIVER_1_LED_TOTAL 47
#    define DRIVER_2_LED_TOTAL 42
#    define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* Set to infinit, which is use in USB mode by default */
#    define RGB_MATRIX_TIMEOUT RGB_MATRIX_TIMEOUT_INFINITE

/* Allow to shutdown driver to save power */
#    define RGB_MATRIX_DRIVER_SHUTDOWN_ENABLE

/* Turn off backllit if brightness value is low */
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 48

/* Indication led */
#    define CAPS_LOCK_INDEX 48
#    define LOW_BAT_IND_INDEX 81

/* RGB Matrix Animation modes. Explicitly enabled
 * For full list of effects, see:
 * https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
 */
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_KEYPRESSES

/* Use first 9 channels of LED driver */
#    define PHASE_CHANNEL MSKPHASE_9CHANNEL

/* Set LED driver current */
#    define SNLED27351_CURRENT_TUNE \
        { 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14 }
#endif

// RGB CONFIG
// All RGB effects https://docs.qmk.fm/features/rgb_matrix
#define RGBLIGHT_SLEEP
#define RGB_DISABLE_TIMEOUT 300000 // milliseconds (5 minutes)
// #define RGB_DISABLE_WHEN_USB_SUSPENDED does notw ork

// https://precondition.github.io/home-row-mods#getting-started-with-home-row-mods-on-qmk
// Configure the global tapping term (default: 200ms)
//#define TAPPING_TERM 200

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define QUICK_TAP_TERM 0 // DOUBLE_PRESS_AUTO_REPEAT_TERM
// #define PERMISSIVE_HOLD

// Added for sm_td library
#define MAX_DEFERRED_EXECUTORS 10
//#define SMTD_GLOBAL_RELEASE_TERM 20

// QMK combos
#define COMBO_TERM 25

// QMK CAPS_WORD
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// QMK leader key
#define LEADER_TIMEOUT 500 // default is 300
#define LEADER_PER_KEY_TIMING
// #define LEADER_NO_TIMEOUT // Disable timeout onl for leader key
// #define LEADER_KEY_STRICT_KEY_PROCESSING

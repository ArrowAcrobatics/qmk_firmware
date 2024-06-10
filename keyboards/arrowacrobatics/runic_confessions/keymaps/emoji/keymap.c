// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum unicode_names {
    BANG,
    IRONY,
    SNEK
};

const uint32_t PROGMEM unicode_map[] = {
[BANG]  = 0x203D,  // ‽
[IRONY] = 0x2E2E,  // ⸮
[SNEK]  = 0x1F40D, // 🐍
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │   │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
              KC_X, KC_2, KC_3,KC_4, KC_5, KC_6,
                               KC_7, KC_8, KC_9,
        UM(SNEK),              KC_A, KC_B, KC_C
    )
};

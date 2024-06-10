// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum layers {
    _F1, // happy faces
    _F2, // oof faces
    _F3, // moods
    _F4, // queer
    _F5, // grindr vocab
    _F6  // misc
};

enum unicode_names {
    // happy faces
    KISS, HEARTY_SMILE, HEART_EYES, UPSIDEDOWN, SWEATSMILE, TEAR_LAUGH, HAPPY,

    // oof faces
    ZIPPER, YIKES, TEAR, MELT, X_EYES, DASH_FACE, SPIRAL_EYES,

    // moods
    COWBOY, DROOL, SWEATYHOT, SHRUG, FPALM, NERD, NAUSEA,

    // queer
    FAIRY, TANGO, BUNNS, SPARKLE, PARTY, RAINBOW, TRANS,

    // grindr vocab
    EGGPL, PEACH, CHERRY, HOLE, WET, FIST, WS,

    // misc
    TEDDY, CHEEKY, CLOWN, SKULL, EYES, DEVIL, ROBOT,

    // unused
    TROPHY, SNEK, POW
};

const uint32_t PROGMEM unicode_map[] = {

// happy faces
[KISS] = 0x1F618, // 😘
[HEARTY_SMILE] = 0x1F970, // 🥰
[HEART_EYES] = 0x1F60D, // 😍
[UPSIDEDOWN] = 0x1F643, // 🙃
[SWEATSMILE] = 0x1F605, // 😅
[TEAR_LAUGH] = 0x1F602, // 😂
[HAPPY] = 0x1F60A, // 😊

// oof faces
[ZIPPER] = 0x1F910, // 🤐
[YIKES] = 0x1F62C, // 😬
[TEAR] = 0x1F972, // 🥲
[MELT] = 0x1FAE0, // 🫠
[X_EYES] = 0x1F635, // 😵
[DASH_FACE] = 0x1FAE5, // 🫥
[SPIRAL_EYES] = 0x1F635, // 😵‍💫

// moods
[COWBOY] = 0x1F920, // 🤠
[DROOL] = 0x1F924, // 🤤
[SWEATYHOT] = 0x1F975, // 🥵
[SHRUG] = 0x1F937, // 🤷‍♂️
[FPALM] = 0x1F926, // 🤦
[NERD] = 0x1F913, // 🤓
[NAUSEA] = 0x1F922, // 🤢

// queer
[FAIRY] = 0x1F9DA, // 🧚‍♂️
[TANGO] = 0x1F483, // 💃
[BUNNS] = 0x1F46F, // 👯
[SPARKLE] = 0x2728, // ✨
[PARTY] = 0x1F389, // 🎉
[RAINBOW] = 0x1F3F3, // 🏳️‍🌈
[TRANS] = 0x1F3F3, // 🏳️‍⚧️

// grindr vocab
[EGGPL] = 0x1F346, // 🍆
[PEACH] = 0x1F351, // 🍑
[CHERRY] = 0x1F352, // 🍒
[HOLE] =  0x1F573, // 🕳
[WET] = 0x1F4A6, // 💦
[FIST] = 0x1F44A, // 👊
[WS] = 0x1F3C4, // 🏄️

// misc
[TEDDY] = 0x1F43B, // 🐻
[CHEEKY] = 0x1F648, // 🙈
[CLOWN] = 0x1F921, // 🤡
[SKULL] = 0x1F480, // 💀
[EYES] = 0x1F440, // 👀
[DEVIL] = 0x1F608, // 😈
[ROBOT] = 0x1F916, // 🤖

// unused
[TROPHY] = 0x1F3C6, // 🏆
[SNEK]  = 0x1F40D, // 🐍
[POW]   = 0x1F4A5, // 💥
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_F1] = LAYOUT(
        TO(_F1), TO(_F2), TO(_F3), TO(_F4), TO(_F5), TO(_F6),
                                     UM(UPSIDEDOWN), UM(SWEATSMILE), UM(HAPPY),
        UM(TEAR_LAUGH),              UM(HEART_EYES), UM(HEARTY_SMILE), UM(KISS)
    ),
    [_F2] = LAYOUT(
            _______, _______, _______, _______, _______, _______,
                                   UM(MELT), UM(DASH_FACE), UM(SPIRAL_EYES),
            UM(TEAR),              UM(ZIPPER), UM(YIKES), UM(X_EYES)
    ),
    [_F3] = LAYOUT(
            _______, _______, _______, _______, _______, _______,
            UM(FPALM), UM(SHRUG), UM(NAUSEA),
            UM(SWEATYHOT),              UM(DROOL), UM(NERD), UM(COWBOY)
    ),
    [_F4] = LAYOUT(
            _______, _______, _______, _______, _______, _______,
            UM(FAIRY), UM(TANGO), UM(BUNNS),
            UM(SPARKLE),              UM(PARTY), UM(RAINBOW), UM(TRANS)
    ),
    [_F5] = LAYOUT(
            _______, _______, _______, _______, _______, _______,
            UM(EGGPL), UM(PEACH), UM(CHERRY),
            UM(WET),              UM(HOLE), UM(FIST), UM(WS)
    ),
    [_F6] = LAYOUT(
            _______, _______, _______, _______, _______, _______,
            UM(CHEEKY), UM(EYES), UM(ROBOT),
            UM(TEDDY),              UM(CLOWN), UM(DEVIL), UM(SKULL)
    )
};

/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 10

// More lighting options in quantum/rgblight/rgblight.h
#ifdef RGBLIGHT_ENABLE

    // Disabling some of these is a good way to save flash space.
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_TWINKLE

    // Set default lighting option
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL+2
    // Allow use of LEDs as modifier/layer indicators without disrupting animations.
    #define RGBLIGHT_LAYERS

    // Allow compiling to work on sofle/rev1
    #if defined(KEYBOARD_sofle_rev1)
	    #define RGBLED_NUM 70
	    // D3 for ws2812 RGB LED
	    #define WS2812_DI_PIN D3
    #endif
#endif

#define VIAL_KEYBOARD_UID {0x78, 0xC3, 0x11, 0x9B, 0xCD, 0x26, 0x15, 0x75}

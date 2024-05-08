// Copyright 2024 Brandon Flexman (@FlexyRexy)
// SPDX-License-Identifier: GPL-2.0-or-later

// Copyright 2024 sammothxc (@sammothxc)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define ENCODERS_PAD_A { C6, D2 }
#define ENCODERS_PAD_B { D4, D3 }
#define DIP_SWITCH_PINS { D7, D1 }
#define WS2812_DI_PIN D0
#define RGBLIGHT_LED_COUNT 72
#define RGBLIGHT_HUE_STEP 15
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT 	
#define RGBLIGHT_EFFECT_TWINKLE
// L_ENCODER SW=D7: l1=KC_MPLY, l2=KC_MUTE
// R_ENCODER SW=D1: l1=none, l2=none

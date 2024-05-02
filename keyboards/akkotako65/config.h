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
// L_ENCODER SW=D7: l1=KC_MPLY, l2=KC_MUTE
// R_ENCODER SW=D1: l1=none, l2=none

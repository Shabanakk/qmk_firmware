#pragma once

// Per-key tapping terms (see get_tapping_term() callback)
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

// Nested taps send modifier even if below tapping term. This causes quite many misfires.
// Do not enable.
// #define PERMISSIVE_HOLD

// Some keys that are typically not rolled when typing should only send the tap action
// if not interrupted/rolled (see get_hold_on_other_key_press() callback).
#define HOLD_ON_OTHER_KEY_PRESS
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// If a tap-hold key is tapped and then pressed and held right afterwards, always perform
// hold action. The default is to repeat the tap-key which is annoying in many typical
// scenarios.
#define QUICK_TAP_TERM 0

// If a tap-hold key is pressed and then, before the tapping term, another key is pressed,
// settle the tap-hold key as tapped if the two keys are on the same hand
// (see chordal_hold_handedness() callback).
#define CHORDAL_HOLD

// -------------------------------------------------------------------
// DEBUGGING
// -------------------------------------------------------------------

// Save some space
#define NO_ACTION_ONESHOT    // -576 bytes
#define NO_USB_STARTUP_CHECK // -272 bytes

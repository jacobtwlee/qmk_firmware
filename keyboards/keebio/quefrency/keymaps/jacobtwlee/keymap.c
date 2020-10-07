#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_65_with_macro(
    KC_F1,   KC_F2,   KC_GESC, KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC, KC_DEL, \
    KC_F3,   KC_F4,   KC_TAB,  KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, \
    KC_F5,   KC_F6,   KC_CAPS, KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGDN, \
    KC_F7,   KC_F8,   KC_LSFT, KC_Z,    KC_X,     KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   MO(_FN1), \
    KC_F9,   KC_F10,  KC_LCTL, KC_LGUI, MO(_FN1), KC_LALT, KC_SPC,           KC_SPC,  XXXXXXX, KC_RALT, KC_RGUI, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN1] = LAYOUT_65_with_macro(
    KC_F11,  KC_F12,  KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, _______, KC_INS, \
    KC_F13,  KC_F14,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, \
    KC_F15,  KC_F16,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, KC_END, \
    KC_F17,  KC_F18,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, _______, \
    KC_F19,  KC_F20,  _______, _______, _______, _______, _______,          _______, XXXXXXX, _______, _______, XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI
  )
};
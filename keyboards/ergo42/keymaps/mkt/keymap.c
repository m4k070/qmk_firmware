#include QMK_KEYBOARD_H
#include "keymap_jp.h"


#define BASE 0
#define EUCA 1
#define META 2
#define SYMB 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   ,------------------------------------------------.   ,-------------------------------------------------.
   | ESC  | Del  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |  @`   | Bksp |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | Tab  |  `   |   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |  ;+  |  :*   | Enter|
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | LSft |  ^~  |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |  ,<  |  .>  |  /?  |  -=   | RSft |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | LCtl | LAlt | LGUI | PScr | INS  | Muhen| Space|   | Space|Henkan| APP  | HOME | End  | RAlt  | RCtl |
   `------------------------------------------------'   `-------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_ESC,   KC_DELT, KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_BSPC, \
    KC_TAB,   KC_GRV,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  \
    KC_LSFT,  KC_EQL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS, KC_RSFT, \
    KC_LCTL, KC_LALT,  KC_LGUI,KC_PSCR, KC_INS,  LT(SYMB, KC_MHEN), LT(META, KC_SPC),  LT(META, KC_SPC), LT(SYMB, KC_HENK), KC_APP,  KC_HOME, KC_END,  KC_RALT,  KC_RCTL \
  ),

  /* EUCA
   ,------------------------------------------------.   ,-------------------------------------------------.
   | ESC  | Del  |   Q  |   W  |  ,<  |  .>  |  ;+  |   |  M   |   R  |   D  |   Y  |   P  |  @`   | Bksp |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | Tab  |  `   |   A  |   O  |   E  |   I  |  U   |   |  G   |   T  |   K  |   S  |   N  |  :*   | Enter|
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | LSft |  ^~  |   Z  |   X  |   C  |   V  |  F   |   |  B   |   H  |   J  |   L  |  /?  |  -=   | RSft |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | LCtl | LAlt | LGUI | PScr | INS  | Muhen| Space|   | Space|Henkan| APP  | HOME | End  | RAlt  | RCtl |
   `------------------------------------------------'   `-------------------------------------------------'
   */
  [EUCA] = LAYOUT( \
    KC_ESC,   KC_DELT, KC_Q,   KC_W,    KC_COMM, KC_DOT,  KC_SCLN, KC_M,   KC_R,    KC_D,    KC_Y,    KC_P,    KC_LBRC, KC_BSPC, \
    KC_TAB,   KC_GRV,  KC_A,   KC_O,    KC_E,    KC_I,    KC_U,    KC_G,   KC_T,    KC_K,    KC_S,    KC_N,    KC_QUOT, KC_ENT,  \
    KC_LSFT,  KC_EQL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_F,    KC_B,   KC_H,    KC_J,    KC_L,    KC_SLSH, KC_MINS, KC_RSFT, \
    KC_LCTL, KC_LALT,  KC_LGUI,KC_PSCR, KC_INS,  LT(SYMB, KC_MHEN), LT(META, KC_SPC),  LT(META, KC_SPC), LT(SYMB, KC_HENK), KC_APP,  KC_HOME, KC_END,  KC_RALT,  KC_RCTL \
  ),

  /* META
   ,------------------------------------------------.   ,------------------------------------------------.
   | ESC  |      |   1  |   2  |   3  |   4  |  5   |   |  6   |   7  |   8  |   9  |   0  | PGUP | Bksp |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | Tab  | BASE |      |  F1  |  F2  |  F3  |  F4  |   | Left | Down |  Up  |Right |      | PGDN | Enter|
   |------+------+------|------+------+------+------+   |------+------+------+------+------+------+------|
   | LSft | EUCA |      |  F5  |  F6  |  F7  |  F8  |   |  F9  |  F10 |  F11 | F12  |      |      | RSft |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | LCtl | LAlt | LGUI | PScr | INS  | Muhen|Space |   |Space |Henkan| App  | HOME | End  | RAlt | RCtl |
   `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    _______, XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PGUP, _______, \
    _______, DF(BASE), XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_PGDN, _______, \
    _______, DF(EUCA), XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, _______, \
    _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______  \
  ),

  /* SYMB
   ,------------------------------------------------.   ,------------------------------------------------.
   | ESC  |      |   !  |   "  |   #  |   $  |   %  |   |   &  |   `  |  (   |   )  |  \   |  |   | Bksp |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | Tab  |      |      |      |      |      |      |   |  [   |  {   |      |      |  +   |  *   | Enter|
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | LSft |      |      |      |      |      |      |   |  ]   |  }   |      |      |  _   |      | RSft |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | LCtl | LAlt | LGUI | PScr | INS  | Muhen| Space|   | Space|Henkan| App  | HOME | End  | RAlt | RCtl |
   `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, XXXXXXX, KC_EXLM, S(KC_2), KC_HASH, KC_DLR,  KC_PERC,  JP_AMPR, S(KC_7),    JP_LPRN, JP_RPRN, KC_RO,      S(KC_JYEN), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_RBRC, S(KC_RBRC), XXXXXXX, XXXXXXX, S(KC_SCLN), S(KC_QUOT), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_BSLS, S(KC_BSLS), XXXXXXX, XXXXXXX, JP_UNDS,    XXXXXXX,    _______, \
    _______, _______, _______, _______, _______, _______, _______,  _______, _______,    _______, _______, _______,    _______,    _______  \
  )
};


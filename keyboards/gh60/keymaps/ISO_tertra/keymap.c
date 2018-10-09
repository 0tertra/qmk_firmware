#include QMK_KEYBOARD_H
// for GH60 but based on satan/keymaps/ben_iso

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXX   KC_NO

#define BASE    0    // Default layer
#define SPACE   1    // Space layer
#define NUMPAD  2    // Alt layer


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  /* Keymap BASE: (Base Layer) Default Layer
  * ,-----------------------------------------------------------.
  * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
  * |-----------------------------------------------------------|
  * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  R  |
  * |-------------------------------------------------------    |
  * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| # | R |
  * |-----------------------------------------------------------|
  * |Shft| \ |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
  * |-----------------------------------------------------------|
  * |Ctrl|Gui |Alt |      Space            |Alt |NPD |FN  |Ctrl |
  * `-----------------------------------------------------------|
  */

  [BASE] = LAYOUT_60_iso(
  KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,     KC_EQL,  KC_BSPC,
  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,     KC_RBRC,
  KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,     KC_NUHS, KC_ENT,
  KC_LSPO,  KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,              KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,     KC_RSPC,
  KC_LCTL,  KC_LGUI, KC_LALT,                   LT(SPACE, KC_SPC),                                     KC_RALT, TG(NUMPAD),  KC_APP,  KC_RCTL
  ),
  
  /* Keymap SPACE: (Base Layer) Default Layer
  * ,-----------------------------------------------------------.
  * |ctrD|F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| ESC   |
  * |-----------------------------------------------------------|
  * |     |   |   |   |   |   |   |  |   |   |   |   |   |      |
  * |-------------------------------------------------------    |
  * |       |   |   |   |   |   |lft|dwn| up|rgt|   |   |   |   |
  * |-----------------------------------------------------------|
  * |    |   |   |   |   |   |   |   |   |   |   |   |          |
  * |-----------------------------------------------------------|
  * |    |    |    |                       |    |    |    |     |
  * `-----------------------------------------------------------|
  */ 
  [SPACE] = LAYOUT_60_iso( //LCTL(LALT(KC_DEL)) makes a key that sends Control+Alt+Delete
  LCTL(LALT(KC_DEL)), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,     KC_F10,  KC_F11,  KC_F12,  KC_DEL,
             _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
             _______,  _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN,  KC_UP, KC_RIGHT,  _______,  _______, _______, _______,
             _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
             _______,  _______, _______,                   _______,                                      _______, _______, _______, _______
  ),
  
  /* Keymap NUMPAD: (Base Layer) Default Layer
  * ,-----------------------------------------------------------.
  * |    |  |   |   |   |   |   |   |   |   |   |   |   |       |
  * |-----------------------------------------------------------|
  * |     |   |   |   |   |   |   |  7|  8|  9|   |   |   |     |
  * |-------------------------------------------------------    |
  * |       |   |   |   |   |   |   |  4|  5|  6|   |   |   |   |
  * |-----------------------------------------------------------|
  * |    |   |   |   |   |   |   |  0|  1|  2|  3|  .|          |
  * |-----------------------------------------------------------|
  * |    |    |    |                       |    |    |    |     |
  * `-----------------------------------------------------------|
  */
  [NUMPAD] = LAYOUT_60_iso( 
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,   KC_P7,   KC_P8,   KC_P9, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,   KC_P4,   KC_P5,   KC_P6, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,   KC_P0,   KC_P1,   KC_P2,   KC_P3, KC_PDOT, _______,
  _______, _______, _______,                   _______,                                     _______, _______, _______, _______
  ),
};

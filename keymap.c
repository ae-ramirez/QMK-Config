#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
// Note: consider defining layers by names

// Layer definitions
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_BSPC, KC_COMM, KC_DOT, KC_LCTL, KC_LSFT, LT(6,KC_SPC), TG(3)),
	[1] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_BSPC, KC_COMM, KC_DOT, KC_LCTL, KC_LSFT, LT(6,KC_SPC), TG(3)),
	[2] = LAYOUT(LCTL(KC_M), KC_WBAK, KC_UP, KC_WFWD, KC_PGUP, LCTL(KC_W), LCTL(KC_T), LCTL(KC_N), RCS(KC_P), LALT(KC_UP), KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, LCTL(KC_B), LCTL(KC_PGUP), LALT(KC_1), LCTL(KC_PGDN), OSL(4), LCTL(KC_0), LCTL(KC_MINS), KC_WREF, LCTL(KC_PLUS), OSL(8), LCTL(KC_F), RCTL(KC_J), LALT(KC_D), LSA(KC_ENT), LALT(KC_DOWN), TO(0), KC_TRNS, MO(6), TG(5)),
	[3] = LAYOUT(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_PLUS, KC_7, KC_8, KC_9, KC_ASTR, KC_UNDERSCORE, KC_LCBR, KC_LPRN, KC_LBRC, KC_QUOT, KC_0, KC_1, KC_2, KC_3, KC_MINS, KC_GRV, KC_RCBR, KC_RPRN, KC_RBRC, KC_DQUO, KC_EQL, KC_4, KC_5, KC_6, KC_SLSH, TO(0), KC_TRNS, KC_TRNS, TG(4)),
	[4] = LAYOUT(KC_MUTE, KC_VOLD, KC_MSTP, KC_VOLU, KC_TRNS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_BSLS, KC_CIRC, KC_AMPR, KC_ASTR, KC_TRNS, KC_TILD, KC_BRID, KC_MSEL, KC_BRIU, KC_TRNS, KC_PIPE, KC_LT, KC_GT, KC_QUES, KC_QUES, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_TRNS, KC_TRNS, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN2, KC_WH_D, KC_BTN1, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(5), KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT(KC_ESC, LALT(KC_LEFT), LALT(KC_RGHT), KC_CAPS, KC_INS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_ESC, KC_TAB, OSM(MOD_LGUI), OSM(MOD_LALT), KC_ENT, TG(6), KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), OSM(MOD_HYPR), OSL(7), KC_BSPC, OSM(MOD_RSFT), OSM(MOD_RCTL), KC_APP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[7] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RCS(KC_PSCR), KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_F1, KC_F2, KC_F3, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_PSCR), KC_F4, KC_F5, KC_F6, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[8] = LAYOUT(KC_TRNS, C(S(G(KC_LEFT))), LGUI(KC_TAB), C(S(G(KC_RIGHT))), KC_TRNS, KC_TRNS, LGUI(KC_P7), LGUI(KC_UP), LGUI(KC_P9), KC_TRNS, KC_TRNS, C(G(KC_LEFT)), LALT(KC_TAB), C(G(KC_RIGHT)), KC_TRNS, KC_TRNS, LGUI(KC_LEFT), C(G(KC_UP)), LGUI(KC_RGHT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SGUI(KC_Q), C(G(KC_DOWN)), LGUI(KC_P1), LGUI(KC_DOWN), LGUI(KC_P3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

// layer lighting

// B0 is left green light
// D5 is right blue light
void keyboard_pre_init_user(void) {
  setPinOutput(B0);  // initialize B0 for LED
  setPinOutput(D5);  // initialize D5 for LED
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 2:
    case 3:
    case 6:
      writePinLow(B0); // Use left green light as layer toggle indicator
      writePinHigh(D5);
      break;
    case 4:
    case 5:
    case 7:
      writePinLow(D5); // Use right blue light as indicator for second toggle layers
      writePinHigh(B0);
      break;
    case 8: // wm layer
      // flash both leds
      writePinLow(B0);
      writePinLow(D5);
      wait_ms(25);
      writePinHigh(D5);
      writePinHigh(B0);
      break;
    default:
      writePinHigh(D5);
      writePinHigh(B0);
      break;
  }
  return state;
}

 // quickly indicate whether qwerty or colemak has been toggled
layer_state_t default_layer_state_set_user(layer_state_t state) {
  switch(get_highest_layer(state)) {
  case 0:
    writePinLow(B0);
    wait_ms(25);
    writePinHigh(B0);
    break;
  case 1:
    writePinLow(D5);
    wait_ms(25);
    writePinHigh(D5);
    break;
  }
  return state;
}


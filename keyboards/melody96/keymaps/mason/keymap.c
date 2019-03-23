#include QMK_KEYBOARD_H

// TOOLS:
// QMK toolbox - to download complied hex file to keyboard CPU
// https://beta.docs.qmk.fm/newbs/newbs_getting_started

// to build: Use MSYS2 to compile
// Start > MSYS2 MinGW 64-bit
// cd /c/code/melody96QMKFork (or wherever)
// make melody96:mason



// MJM to preserve the pretty alignment, below
#define KC_PRVT KC_MEDIA_PREV_TRACK
#define KC_NXTT KC_MEDIA_NEXT_TRACK
#define KC_PLPA KC_MEDIA_PLAY_PAUSE
#define KC_COMP KC_MY_COMPUTER
#define KC_CALC KC_CALCULATOR

enum custom_keycodes
{
  MK_CF13 = SAFE_RANGE,
  MK_CF20,
  MK_CF14,
  MK_CF19,
  MK_AF4,
  MK_CF4,
  MK_MIN,
  MK_MAX,
  MK_TASK,  
  MK_NOTEPAD,
  MK_CMDPROMPT,
  MK_SPOTIFY,
  MK_ONENOTE,
  MK_VS,
  MK_EVERNOTE,
  MK_STNG,
  MK_WEBB,
  MK_NOTE,
  MK_WNTB,
  MK_CSF13
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
| ESC*   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   | P SCN  | WINTAB |  MIN   |  MAX   | CtrlF4 |  AltF4 |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        | BACK   |        |        |        |        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   |   \    | SPACE  | COMP   | CALC   | NOTE   | layer3 |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |             |        |        |        | RGBLED |
|    TAB     |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \      |  INS   |  HOME  |  PGUP  | toggle |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |   ;    |   '    |                    |        |        |        |        |
|   CAPS LOCK  |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |       ENTER        |  DEL   |  END   |  PGDN  | layer2 |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |        |        |        |        |        |   ,    |    .   |   /    |                |        |        |        |        | bklgt  |
|  SHIFT  |  NUBS  |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |       TASK     | VOL +  |  DEL   |   UP   | PRIOR  | toggle |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        | Play   |        |        |        |        |        |        |        |
| CTRL     |   LGUI   | L ALT    |                      SPACE                             | < Trk  | Pause  |  Trk > |  MUTE  | VOL -  |  LEFT  | DOWN   | RIGHT  | layer1 |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
*/
	LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, MK_WNTB, MK_MIN,  MK_MAX,  MK_CF4,   MK_AF4,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_BSPC, KC_COMP, KC_CALC, MK_NOTE,  MO(3),
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_INS,  KC_HOME, KC_PGUP,  RGB_TOG,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_DEL,  KC_END,  KC_PGDN,  MO(2),
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MK_TASK,          KC_VOLU, KC_DEL,  KC_UP,   KC_WBAK,  BL_TOGG,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_PRVT, KC_PLPA, KC_NXTT, KC_MUTE, KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT,  MO(1)),



  /* Layer 1, UI / window positioning layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |  Ctrl  |        |        |
|              |        |        |        |        |        |        |        |        |        |        |        |                    |   F20  |  F13   |  F19   |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |        |        |        |        |        |        |        |        |                |        |        |CTRL+   |        |        |
|         |        |        |        |        |        |        |        |        |        |        |        |   R-SHIFT      |        |   F13  |SHFT+F13|  F14   |        |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |        |        |        |        |  Ctrl+ | Ctrl+  |  Ctrl  |        |
|          |          |          |                                                        |        |        |        |        |        |  F20   | F14    |  F19   |        |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
*/
	LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   KC_F20 , MK_CF13, KC_F19 , _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RSFT,          _______, KC_F13 , MK_CSF13, KC_F14 , _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, MK_CF20, MK_CF14, MK_CF19, _______),





  /* Layer 2 - RGB LED / backlight control layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
| RESET  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |  HUE+  |  SAT+  |  VAL+  |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|              |        |        |        |        |        |        |        |        |        |        |        |                    |  HUE-  |  SAT-  |  VAL-  |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |        |        |        |        |        |        |        |        |                |        |  RGB   | BACK   | BACKL  |        |
|         |        |        |        |        |        |        |        |        |        |        |        |                |        | MODE   | LIGHT+ | TOGGL  |        |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |        |        |        |        |        | BACK   |        |        |
|          |          |          |                                                        |        |        |        |        |        |        | LIGHT- |        |        |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
*/
	LAYOUT(
    RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          RGB_HUI, RGB_SAI, RGB_VAI, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   RGB_HUD, RGB_SAD, RGB_VAD, _______,
    _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,          _______, RGB_MOD, BL_INC,  BL_TOGG, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, BL_DEC,  _______, _______),

    /* Layer 3 - "key" layer (macros)
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        | Setting|        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|            |        |  Web   | Ever   |        |        |        |        |        | One    |        |        |        |             |        |        |        |        |
|            |        | Browser| Note   |        |        |        |        |        | Note   |        |        |        |             |        |        |        |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|              |        | Spotify|        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        | Command| Visual |        |        |        |        |        |        |                |        |        |        |        |        |
|         |        |        |        | Prompt | Studio |        | Notepad|        |        |        |        |                |        |        |        |        |        |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |        |        |        |        |        |        |        |        |
|          |          |          |                                                        |        |        |        |        |        |        |        |        |        |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
*/


	LAYOUT(
    _______, _______, _______,    _______,     _______,       _______, _______, _______,   _______,   _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,    _______,     _______,       _______, _______, _______,   _______,   _______,    _______, _______, _______, _______, _______, MK_STNG, _______, _______, _______,
    _______, _______, MK_WEBB,    MK_EVERNOTE, _______,       _______, _______, _______,   _______,   MK_ONENOTE, _______, _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, MK_SPOTIFY, _______,     _______,       _______, _______, _______,   _______,   _______,    _______, _______, _______,                   _______, _______, _______, _______,
    _______, _______, _______,    _______,     MK_CMDPROMPT,  MK_VS, _______,  MK_NOTEPAD, _______,   _______,    _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, _______, _______,                                _______,                                _______,    _______, _______, _______, _______, _______, _______, _______, _______)


};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
        switch(keycode) {
            case MK_CF13:
                SEND_STRING(SS_LCTRL(SS_TAP(X_F13))); //Ctrl+F13
                return false;
            case MK_CF20:
                SEND_STRING(SS_LCTRL(SS_TAP(X_F20))); // Ctrl+F20
                return false;
            case MK_CF14:
                SEND_STRING(SS_LCTRL(SS_TAP(X_F14))); // Ctrl+F14
                return false;
            case MK_CF19:
                SEND_STRING(SS_LCTRL(SS_TAP(X_F19)));  // Ctrl+F19
                return false;
            case MK_AF4:
                SEND_STRING(SS_LALT(SS_TAP(X_F4))); // Alt+F4
                return false;
            case MK_CF4:
                SEND_STRING(SS_LCTRL(SS_TAP(X_F4))); // Ctrl+F4
                return false;
            case MK_MIN:
                SEND_STRING(SS_LGUI(SS_TAP(X_DOWN))); // Win+DownArrow
                return false;
            case MK_MAX:
                SEND_STRING(SS_LGUI(SS_TAP(X_UP))); // Win+UpArrow
                return false;
            case MK_TASK:
                SEND_STRING( SS_DOWN(X_LSHIFT) SS_DOWN(X_LCTRL) SS_TAP(X_ESCAPE) SS_UP(X_LSHIFT) SS_UP(X_LCTRL) ); // Ctrl+Shift+Esc
                return false;

            case MK_NOTEPAD:
                SEND_STRING(SS_TAP(X_LGUI)"Notepad"SS_TAP(X_ENTER));
                return false;
            case MK_CMDPROMPT:
                SEND_STRING(SS_TAP(X_LGUI)"Command Prompt"SS_TAP(X_ENTER));
                return false;
            case MK_SPOTIFY:
                SEND_STRING(SS_TAP(X_LGUI)"Spotify"SS_TAP(X_ENTER));
                return false;
            case MK_ONENOTE:
                SEND_STRING(SS_TAP(X_LGUI)"OneNote"SS_TAP(X_ENTER));
                return false;
            case MK_VS:
                SEND_STRING(SS_TAP(X_LGUI)"Visual studio"SS_TAP(X_ENTER));
                return false;
            case MK_EVERNOTE:
                SEND_STRING(SS_TAP(X_LGUI)"Evernote"SS_TAP(X_ENTER));
                return false;
            case MK_STNG:
                SEND_STRING(SS_TAP(X_LGUI)"Settings"SS_TAP(X_ENTER));
                return false;
            case MK_WEBB:
                SEND_STRING(SS_TAP(X_LGUI)"Google Chrome"SS_TAP(X_ENTER));
                return false;
            case MK_NOTE:
                SEND_STRING(SS_TAP(X_LGUI)"sublime text"SS_TAP(X_ENTER));
                return false;
            case MK_WNTB:
                SEND_STRING(SS_LWIN(SS_TAP(X_TAB)));  // Win+Tab
                return false;
            case MK_CSF13:
                SEND_STRING( SS_DOWN(X_LSHIFT) SS_DOWN(X_LCTRL) SS_TAP(X_F13) SS_UP(X_LSHIFT) SS_UP(X_LCTRL) ); // Ctrl+Shift+F13
                return false;
        }
    }
    return true;
}


    /* template for new layers
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |        |        |        |        |        |        |        |        |                |        |        |        |        |        |
|         |        |        |        |        |        |        |        |        |        |        |        |                |        |        |        |        |        |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |        |        |        |        |        |        |        |        |
|          |          |          |                                                        |        |        |        |        |        |        |        |        |        |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
	LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______,  _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______, _______)
*/

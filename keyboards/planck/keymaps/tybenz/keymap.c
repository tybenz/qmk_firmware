// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "planck.h"
#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

#define ALP 0
#define NUM 1
#define SYM 2
#define FUN 3
#define MAC 4

#define TY_TILD LSFT(KC_GRV)
#define TY_LCRL LSFT(KC_LBRC)
#define TY_RCRL LSFT(KC_RBRC)
#define TY_BANG LSFT(KC_1)
#define TY_AT LSFT(KC_2)
#define TY_PND LSFT(KC_3)
#define TY_DOLL LSFT(KC_4)
#define TY_PERC LSFT(KC_5)
#define TY_CART LSFT(KC_6)
#define TY_AMP LSFT(KC_7)
#define TY_STAR LSFT(KC_8)
#define TY_LPR LSFT(KC_9)
#define TY_RPR LSFT(KC_0)
#define TY_DBQT LSFT(KC_QUOT)
#define TY_UND LSFT(KC_MINS)
#define TY_PLUS LSFT(KC_EQL)
#define TY_COL LSFT(KC_SCLN)

#define SP_UPLT LCTL(LGUI(KC_LEFT))
#define SP_UPRT LCTL(LGUI(KC_RGHT))
#define SP_LWLT LSFT(LCTL(LGUI(KC_LEFT)))
#define SP_LWRT LSFT(LCTL(LGUI(KC_RGHT)))
#define SP_UPHF LALT(LGUI(KC_UP))
#define SP_DNHF LALT(LGUI(KC_DOWN))
#define SP_LTHF LALT(LGUI(KC_LEFT))
#define SP_RTHF LALT(LGUI(KC_RGHT))
#define SP_THRD LCTL(LALT(KC_RGHT))
#define SP_NXDS LCTL(LGUI(LALT(KC_RGHT)))
#define SP_PVDS LCTL(LGUI(LALT(KC_LEFT)))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[ALP] = { /* Colemak */
  {  KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_BSLS  },
  {  KC_LCTL,  KC_A,     KC_R,     KC_S,     KC_T,     KC_D,     KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_ENT   },
  {  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT  },
  {  KC_TRNS,  KC_TRNS,  KC_LALT,  KC_LGUI,  KC_BSPC,  MO(NUM),  MO(SYM),  KC_SPC,   MO(FUN),  KC_TRNS,  KC_TRNS,  KC_TRNS  }
},
[NUM]  =         {
  {  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11   },
  {  KC_TRNS,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_TRNS  },
  {  KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LBRC,  KC_TRNS,  KC_TRNS,  KC_RBRC,  KC_MINS,  KC_EQL,   KC_TRNS,  KC_NO    },
  {  MO(FUN),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS  }
},
[SYM] = {
  {  KC_ESC,   KC_TRNS,  KC_TRNS,  KC_TRNS,  TY_LCRL,  KC_TRNS,  KC_TRNS,  TY_RCRL,  KC_MINS,  KC_EQL,   TY_COL,   MO(MAC)   },
  {  TY_TILD,  TY_BANG,  TY_AT,    TY_PND,   TY_DOLL,  TY_PERC,  TY_CART,  TY_AMP,   TY_STAR,  TY_LPR,   TY_RPR,   KC_QUOT  },
  {  KC_NO,    KC_TRNS,  KC_TRNS,  KC_GRV,   KC_LBRC,  KC_TRNS,  KC_TRNS,  KC_RBRC,  TY_UND,   TY_PLUS,  TY_DBQT,  KC_NO    },
  {  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS  }
},
[FUN] = {
  {  KC_TRNS,  SP_UPLT,  SP_UPHF,  SP_UPRT,  SP_NXDS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS,  KC_TRNS  },
  {  KC_TRNS,  SP_LTHF,  SP_DNHF,  SP_RTHF,  SP_PVDS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_TRNS,  KC_TRNS  },
  {  KC_TRNS,  SP_LWLT,  SP_THRD,  SP_LWRT,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MUTE,  KC_VOLU,  KC_VOLD,  KC_TRNS,  KC_TRNS  },
  {  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS  }
},
[MAC] = {
  {  RESET,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS  },
  {  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  M(0),     M(1),     M(2),     M(3),     KC_TRNS  },
  {  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS  },
  {  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS  }
}};

const uint16_t PROGMEM fn_actions[] = {
};

#include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0: if (record->event.pressed) return MACRO_PASSWORD1; break;
        case 1: if (record->event.pressed) return MACRO_PASSWORD2; break;
        case 2: if (record->event.pressed) return MACRO_PASSWORD3; break;
        case 3: if (record->event.pressed) return MACRO_PASSWORD4; break;
      }
    return MACRO_NONE;
};

#ifdef AUDIO_ENABLE

float tone_startup[][2]    = SONG(STARTUP_SOUND);
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
float tone_plover[][2]     = SONG(PLOVER_SOUND);
float tone_plover_gb[][2]  = SONG(PLOVER_GOODBYE_SOUND);
float music_scale[][2]     = SONG(MUSIC_SCALE_SOUND);

float tone_goodbye[][2] = SONG(GOODBYE_SOUND);
#endif

void matrix_init_user(void) {
    #ifdef AUDIO_ENABLE
        startup_user();
    #endif
}

#ifdef AUDIO_ENABLE

void startup_user()
{
    _delay_ms(20); // gets rid of tick
    PLAY_NOTE_ARRAY(tone_startup, false, 0);
}

void shutdown_user()
{
    PLAY_NOTE_ARRAY(tone_goodbye, false, 0);
    _delay_ms(150);
    stop_all_notes();
}

void music_on_user(void)
{
    music_scale_user();
}

void music_scale_user(void)
{
    PLAY_NOTE_ARRAY(music_scale, false, 0);
}

#endif

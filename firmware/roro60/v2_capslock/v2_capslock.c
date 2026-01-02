#include "v2_capslock.h"

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        if (led_state.caps_lock){
            rgblight_enable();
            rgblight_mode(1);
        } else {
            rgblight_disable_noeeprom();
        }
    }
    return res;
}

/* Copyright 2020 Simon Pesant <https://github.com/pesantsi>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "smalltest.h"
#include <stdio.h>
#include <print.h>

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.
void matrix_init_kb(void)
{
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    matrix_init_user();
}

void matrix_scan_kb(void)
{
    // put your looping keyboard code here
    // runs every cycle (a lot)

    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record)
{
    // put your per-action keyboard code here
    // runs for every action, just before processing by the firmware
    return process_record_user(keycode, record);
}

#ifdef OLED_DRIVER_ENABLE
static uint32_t oled_timer = 0;

static void render_three_peze(void) {
    static const unsigned char PROGMEM logo_bmp[] = {0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x01, 0xF0, 0x3F, 0x0F, 0x87, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x3F, 0x0F, 0xC7, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8C, 0x30, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 0x86, 0x30, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                     0x00, 0x00, 0x00, 0x00, 0x01, 0x86, 0x3F, 0x03, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8C, 0x3F, 0x06, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x20, 0x00, 0x01, 0xFC, 0x30, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x20, 0x10, 0x01, 0xF8, 0x30, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x20, 0x08, 0x01, 0x80, 0x3F, 0x0F, 0xC7, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x04, 0x01, 0x80, 0x3F, 0x0F, 0xC7, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                     0x80, 0x38, 0x70, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x60, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0xE0, 0x04, 0x01, 0x84, 0x1C, 0x7C, 0x06, 0x18, 0x10, 0xFC, 0x7C, 0x0C, 0x7F, 0x00, 0x00, 0x01, 0xE0, 0x04, 0x01, 0x86, 0x08, 0x7F, 0x06, 0x18, 0x71, 0xFC, 0x7F, 0x0C, 0x7F, 0x0E, 0x10, 0x01, 0xE0, 0x10, 0x01, 0x87, 0x08, 0x61, 0x86, 0x18, 0xC0, 0x30, 0x63, 0x0C, 0x60, 0x18, 0x06, 0x01, 0xF0, 0x00, 0x01, 0x86, 0x08, 0x61, 0x86, 0x18, 0xE0, 0x30, 0x63, 0x8C, 0x60, 0x18, 0x02, 0x00, 0x60, 0x00, 0x01, 0x86, 0x88, 0x60, 0x86, 0x18, 0x60, 0x30, 0x63, 0x0C, 0x7E, 0x0C, 0x01, 0x00, 0x60, 0x00, 0x01, 0x86, 0x48, 0x60, 0x86, 0x18, 0x30, 0x30, 0x7F, 0x0C, 0x7E, 0x06,
                                                     0x00, 0x98, 0x60, 0x00, 0x01, 0x86, 0x08, 0x61, 0x86, 0x18, 0x30, 0x30, 0x7E, 0x0C, 0x60, 0x06, 0x00, 0x00, 0x60, 0x00, 0x01, 0x86, 0x38, 0x61, 0x86, 0x18, 0x30, 0x30, 0x66, 0x0C, 0x60, 0x06, 0x00, 0x00, 0x60, 0x00, 0x01, 0x86, 0x18, 0x7F, 0x07, 0xF0, 0xE0, 0x30, 0x63, 0x0C, 0x7F, 0x1C, 0x00, 0x00, 0xE0, 0x00, 0x01, 0x86, 0x08, 0x7C, 0x01, 0xE0, 0x40, 0x30, 0x63, 0x0C, 0x7F, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    oled_draw_bitmap(0, 0, logo_bmp, 128, 32, OLED_WHITE);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

void oled_task_user(void) {
    if (timer_elapsed32(oled_timer) < 5000) {
        render_three_peze();
    } else if (timer_elapsed32(oled_timer) > 5000 && timer_elapsed32(oled_timer) < 6000) {
        oled_clear();
    } else {
        //oled_clear();
        //oled_draw_line(0, 0, 128, 0, OLED_WHITE);

        //oled_set_cursor(0, 3);

        //// Host Keyboard LED Status
        //led_t led_state = host_keyboard_led_state();
        //char  buffer[18];
        //sprintf(buffer, "   %s  %s  %s",
        //    led_state.num_lock ? "NUM" : "   ",
        //    led_state.caps_lock ? "CAP" : "   ",
        //    led_state.scroll_lock ? "SCR\r" : "   \r"); 
        //oled_write(buffer, false);

        //oled_write_P(PSTR("ABCDEFGHIJKLMONPQRSTUV\r"), false);
        //oled_write_P(PSTR("ABCDEFGHIJKLMONPQRSTUV\r"), false);

        oled_advance_page(true);
        oled_write_char('A', false);
        oled_advance_char();
        oled_write_char('A', false);
        oled_advance_page(false);
        oled_write("Hello world", false);
        oled_write("Hello world", false);

        //oled_pan(true);
    }
}

#endif

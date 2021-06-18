/* Copyright 2020 three_peze
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

#include "toomanykeys.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
 /* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */

   {0, B_1,   A_1,   C_1},
   {0, E_1,   D_1,   F_1},
   {0, H_1,   G_1,   I_1},
   {0, K_1,   J_1,   L_1},

   {0, B_2,   A_2,   C_2},
   {0, E_2,   D_2,   F_2},
   {0, H_2,   G_2,   I_2},
   {0, K_2,   J_2,   L_2},

   {0, B_3,   A_3,   C_3},
   {0, E_3,   D_3,   F_3},
   {0, H_3,   G_3,   I_3},
   {0, K_3,   J_3,   L_3},

   {0, B_4,   A_4,   C_4},
   {0, E_4,   D_4,   F_4},
   {0, H_4,   G_4,   I_4},
   {0, K_4,   J_4,   L_4},

   {0, B_5,   A_5,   C_5},
   {0, E_5,   D_5,   F_5},
   {0, H_5,   G_5,   I_5},
   {0, K_5,   J_5,   L_5},

   {0, B_6,   A_6,   C_6},
   {0, E_6,   D_6,   F_6},
   {0, H_6,   G_6,   I_6},
   {0, K_6,   J_6,   L_6},

   {0, B_7,   A_7,   C_7},
   {0, E_7,   D_7,   F_7},
   {0, H_7,   G_7,   I_7},
   {0, K_7,   J_7,   L_7},

   {0, B_8,   A_8,   C_8},
   {0, E_8,   D_8,   F_8},
   {0, H_8,   G_8,   I_8},
   {0, K_8,   J_8,   L_8},

   {0, B_9,   A_9,   C_9},
   {0, E_9,   D_9,   F_9},
   {0, H_9,   G_9,   I_9},
   {0, K_9,   J_9,   L_9},

   {0, B_10,   A_10,   C_10},
   {0, E_10,   D_10,   F_10},
   {0, H_10,   G_10,   I_10},
   {0, K_10,   J_10,   L_10},

   {0, B_11,   A_11,   C_11},
   {0, E_11,   D_11,   F_11},
   {0, H_11,   G_11,   I_11},
   {0, K_11,   J_11,   L_11},

   {0, B_12,   A_12,   C_12},
   {0, E_12,   D_12,   F_12},
   {0, H_12,   G_12,   I_12},
   {0, K_12,   J_12,   L_12},

   {0, B_13,   A_13,   C_13},
   {0, E_13,   D_13,   F_13},
   {0, H_13,   G_13,   I_13},
   {0, K_13,   J_13,   L_13},

   {0, B_14,   A_14,   C_14},
   {0, E_14,   D_14,   F_14},
   {0, H_14,   G_14,   I_14},
   {0, K_14,   J_14,   L_14},

   {0, B_15,   A_15,   C_15},
   {0, E_15,   D_15,   F_15},
   {0, H_15,   G_15,   I_15},
   {0, K_15,   J_15,   L_15},

   {0, B_16,   A_16,   C_16},
   {0, E_16,   D_16,   F_16},
   {0, H_16,   G_16,   I_16},
   {0, K_16,   J_16,   L_16},

   //{1, B_1,   A_1,   C_1},
   {1, E_1,   D_1,   F_1},
   {1, H_1,   G_1,   I_1},
   //{1, K_1,   J_1,   L_1},
	
   //{1, B_2,   A_2,   C_2},
   {1, E_2,   D_2,   F_2},
   {1, H_2,   G_2,   I_2},
   {1, K_2,   J_2,   L_2},
	
   //{1, B_3,   A_3,   C_3},
   {1, E_3,   D_3,   F_3},
   {1, H_3,   G_3,   I_3},
   {1, K_3,   J_3,   L_3},
	
   //{1, B_4,   A_4,   C_4},
   {1, E_4,   D_4,   F_4},
   {1, H_4,   G_4,   I_4},
   {1, K_4,   J_4,   L_4},
	
   //{1, B_5,   A_5,   C_5},
   {1, E_5,   D_5,   F_5},
   {1, H_5,   G_5,   I_5},
   {1, K_5,   J_5,   L_5},
	
   //{1, B_6,   A_6,   C_6},
   {1, E_6,   D_6,   F_6},
   {1, H_6,   G_6,   I_6},
   //{1, K_6,   J_6,   L_6},
	
   //{1, B_7,   A_7,   C_7},
   {1, E_7,   D_7,   F_7},
   {1, H_7,   G_7,   I_7},
   //{1, K_7,   J_7,   L_7},
	
   //{1, B_8,   A_8,   C_8},
   {1, E_8,   D_8,   F_8},
   {1, H_8,   G_8,   I_8},
   //{1, K_8,   J_8,   L_8},
	
   {1, B_9,   A_9,   C_9},
   {1, E_9,   D_9,   F_9},
   {1, H_9,   G_9,   I_9},
   //{1, K_9,   J_9,   L_9},
	
   {1, B_10,   A_10,   C_10},
   {1, E_10,   D_10,   F_10},
   {1, H_10,   G_10,   I_10},
   //{1, K_10,   J_10,   L_10},
	
   {1, B_11,   A_11,   C_11},
   {1, E_11,   D_11,   F_11},
   {1, H_11,   G_11,   I_11},
   //{1, K_11,   J_11,   L_11},
	
   {1, B_12,   A_12,   C_12},
   {1, E_12,   D_12,   F_12},
   {1, H_12,   G_12,   I_12},
   //{1, K_12,   J_12,   L_12},
	
   {1, B_13,   A_13,   C_13},
   {1, E_13,   D_13,   F_13},
   {1, H_13,   G_13,   I_13},
   //{1, K_13,   J_13,   L_13},
	
   {1, B_14,   A_14,   C_14},
   {1, E_14,   D_14,   F_14},
   {1, H_14,   G_14,   I_14},
   {1, K_14,   J_14,   L_14},
	
   {1, B_15,   A_15,   C_15},
   {1, E_15,   D_15,   F_15},
   {1, H_15,   G_15,   I_15},
   {1, K_15,   J_15,   L_15},
	
   {1, B_16,   A_16,   C_16},
   {1, E_16,   D_16,   F_16},
   {1, H_16,   G_16,   I_16},
   {1, K_16,   J_16,   L_16},

};

// 7 rows
// 23 cols
led_config_t g_led_config = {{
    {  0,  1,  2,  3,  4,  5,  6 },
    {  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 },
    { 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43 },
    { 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64 },
    { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80 },
    { 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97 },
    { 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 }
}, {
    /*{ 0,  0 },{ 10,  0 },{ 20,  0 },*/{ 30,  0 },{ 40,  0 },{ 50,  0 },{ 60,  0 },/*{ 70,  0 },{ 80,  0 },{ 90,  0 },{ 100,  0 },{ 110,  0 },{ 120,  0 },{ 130,  0 },{ 140,  0 },{ 150,  0 },*/{ 160,  0 },{ 170,  0 },{ 180,  0 },/*{ 190,  0 },{ 200,  0 },{ 210,  0 },{ 220,  0 },*/
    { 0, 10 },/*{ 10, 10 },*/{ 20, 10 },{ 30, 10 },{ 40, 10 },{ 50, 10 },/*{ 60, 10 },*/{ 70, 10 },{ 80, 10 },{ 90, 10 },{ 100, 10 },/*{ 110, 10 },*/{ 120, 10 },{ 130, 10 },{ 140, 10 },{ 150, 10 },{ 160, 10 },{ 170, 10 },{ 180, 10 },/*{ 190, 10 },{ 200, 10 },{ 210, 10 },{ 220, 10 },*/
    /*{ 0, 20 },*/{ 10, 20 },{ 20, 20 },{ 30, 20 },{ 40, 20 },{ 50, 20 },{ 60, 20 },{ 70, 20 },{ 80, 20 },{ 90, 20 },{ 100, 20 },{ 110, 20 },{ 120, 20 },{ 130, 20 },{ 140, 20 },{ 150, 20 },{ 160, 20 },{ 170, 20 },{ 180, 20 },{ 190, 20 },{ 200, 20 },{ 210, 20 },/*{ 220, 20 },*/
    /*{ 0, 30 },*/{ 10, 30 },{ 20, 30 },{ 30, 30 },{ 40, 30 },{ 50, 30 },{ 60, 30 },{ 70, 30 },{ 80, 30 },{ 90, 30 },{ 100, 30 },{ 110, 30 },{ 120, 30 },{ 130, 30 },{ 140, 30 },{ 150, 30 },{ 160, 30 },{ 170, 30 },{ 180, 30 },{ 190, 30 },{ 200, 30 },{ 210, 30 },/*{ 220, 30 },*/
    /*{ 0, 40 },{ 10, 40 },{ 20, 40 },{ 30, 40 },*/{ 40, 40 },{ 50, 40 },{ 60, 40 },{ 70, 40 },{ 80, 40 },{ 90, 40 },{ 100, 40 },{ 110, 40 },{ 120, 40 },{ 130, 40 },{ 140, 40 },{ 150, 40 },{ 160, 40 },{ 170, 40 },{ 180, 40 },{ 190, 40 },/*{ 200, 40 },{ 210, 40 },{ 220, 40 },*/
    /*{ 0, 50 },{ 10, 50 },{ 20, 50 },*/{ 30, 50 },{ 40, 50 },{ 50, 50 },{ 60, 50 },{ 70, 50 },{ 80, 50 },{ 90, 50 },{ 100, 50 },{ 110, 50 },{ 120, 50 },{ 130, 50 },{ 140, 50 },{ 150, 50 },{ 160, 50 },{ 170, 50 },{ 180, 50 },{ 190, 50 },/*{ 200, 50 },{ 210, 50 },{ 220, 50 },*/
    /*{ 0, 60 },{ 10, 60 },{ 20, 60 },{ 30, 60 },{ 40, 60 },*/{ 50, 60 },{ 60, 60 },{ 70, 60 },{ 80, 60 },{ 90, 60 },{ 100, 60 },{ 110, 60 },{ 120, 60 },{ 130, 60 },{ 140, 60 },{ 150, 60 },{ 160, 60 },{ 170, 60 }/*,{ 180, 60 },{ 190, 60 },{ 200, 60 },{ 210, 60 },{ 220, 60 }*/
}, { /* All keys are LED_FLAG_KEYLIGHT*/
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4
}};
#endif// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.

/*
void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)

    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    // put your per-action keyboard code here
    // runs for every action, just before processing by the firmware

    return process_record_user(keycode, record);
}

bool led_update_kb(led_t led_state) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

    return led_update_user(led_state);
}
*/
//void keyboard_post_init_user(void) {
//    // Customise these values to desired behaviour
//    debug_enable = true;
//    debug_matrix = true;
//    // debug_keyboard=true;
//    // debug_mouse=true;
//}

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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
	            K002, K003, K004, K005,                                                       K015, K016, K017,                               \
	K100,       K102, K103, K104, K105,       K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, K117,                               \
	                                                                                                                                          \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,       K314, K315, K316, K317,       K319, K320, K321, K322, \
	K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, K416, K417,       K419, K420, K421, K422, \
	K500,       K502, K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K513,                               K519, K520, K521,       \
	      K601, K602, K603, K604, K605, K606, K607, K608, K609, K610, K611,       K613,             K616,             K619, K620, K621, K622, \
	K700, K701,       K703,             K706,                   K710, K711,       K713, K714, K715, K716, K717,       K719,       K721  \
) { \
	{ KC_NO, KC_NO, K002,  K003,  K004,  K005,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K015,  K016,  K017,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K100,  KC_NO, K102,  K103,  K104,  K105,  KC_NO, K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, K314,  K315,  K316,  K317,  KC_NO, K319,  K320,  K321,  K322 }, \
	{ K400,  KC_NO, K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416,  K417,  KC_NO, K419,  K420,  K421,  K422 }, \
	{ K500,  KC_NO, K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511,  K512,  K513,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K519,  K520,  K521,  KC_NO }, \
	{ KC_NO, K601,  K602,  K603,  K604,  K605,  K606,  K607,  K608,  K609,  K610,  K611,  KC_NO, K613,  KC_NO, KC_NO, K616,  KC_NO, KC_NO, K619,  K620,  K621,  K622 }, \
	{ K700,  K701,  KC_NO, K703,  KC_NO, KC_NO, K706,  KC_NO, KC_NO, KC_NO, K710,  K711,  KC_NO, K713,  K714,  K715,  K716,  K717,  KC_NO, K719,  KC_NO, K721,  KC_NO }  \
}

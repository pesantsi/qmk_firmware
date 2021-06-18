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
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, K216, K217,       K219, K220, K221, K222, \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317,       K319, K320, K321, K322, \
	K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413,                               K419, K420, K421,       \
	      K501, K502, K503, K504, K505, K506, K507, K508, K509, K510, K511,       K513,             K516,             K519, K520, K521, K522, \
	K600, K601,       K603,             K606,                   K610, K611,       K613, K614, K615, K616, K617,       K619,       K621        \
) { \
	{ KC_NO, KC_NO, K002,  K003,  K004,  K005,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K015,  K016,  K017,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K100,  KC_NO, K102,  K103,  K104,  K105,  KC_NO, K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215,  K216,  K217,  KC_NO, K219,  K220,  K221,  K222 }, \
	{ K300,  KC_NO, K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  K317,  KC_NO, K319,  K320,  K321,  K322 }, \
	{ K400,  KC_NO, K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K419,  K420,  K421,  KC_NO }, \
	{ KC_NO, K501,  K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511,  KC_NO, K513,  KC_NO, KC_NO, K516,  KC_NO, KC_NO, K519,  K520,  K521,  K522 }, \
	{ K600,  K601,  KC_NO, K603,  KC_NO, KC_NO, K606,  KC_NO, KC_NO, KC_NO, K610,  K611,  KC_NO, K613,  K614,  K615,  K616,  K617,  KC_NO, K619,  KC_NO, K621,  KC_NO }  \
}

/*
 * Copyright (C) 2015-2018 Dubalu LLC. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include "ansi_color.hh"      // for ansi_color

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wvariadic-macros"

#define NO_COLOR no_color()
#define CLEAR_COLOR clear_color()


#define ALICE_BLUE rgb(240, 248, 255)
#define L_UNINDENTED_ALICE_BLUE(args...) L_UNINDENTED(LOG_DEBUG, ALICE_BLUE, args)
#define L_ALICE_BLUE(args...) L(LOG_DEBUG, ALICE_BLUE, args)
#define L_STACKED_ALICE_BLUE(args...) L_STACKED(LOG_DEBUG, ALICE_BLUE, args)

#define ANTIQUE_WHITE rgb(250, 235, 215)
#define L_UNINDENTED_ANTIQUE_WHITE(args...) L_UNINDENTED(LOG_DEBUG, ANTIQUE_WHITE, args)
#define L_ANTIQUE_WHITE(args...) L(LOG_DEBUG, ANTIQUE_WHITE, args)
#define L_STACKED_ANTIQUE_WHITE(args...) L_STACKED(LOG_DEBUG, ANTIQUE_WHITE, args)

#define AQUA rgb(0, 255, 255)
#define L_UNINDENTED_AQUA(args...) L_UNINDENTED(LOG_DEBUG, AQUA, args)
#define L_AQUA(args...) L(LOG_DEBUG, AQUA, args)
#define L_STACKED_AQUA(args...) L_STACKED(LOG_DEBUG, AQUA, args)

#define AQUA_MARINE rgb(127, 255, 212)
#define L_UNINDENTED_AQUA_MARINE(args...) L_UNINDENTED(LOG_DEBUG, AQUA_MARINE, args)
#define L_AQUA_MARINE(args...) L(LOG_DEBUG, AQUA_MARINE, args)
#define L_STACKED_AQUA_MARINE(args...) L_STACKED(LOG_DEBUG, AQUA_MARINE, args)

#define AZURE rgb(240, 255, 255)
#define L_UNINDENTED_AZURE(args...) L_UNINDENTED(LOG_DEBUG, AZURE, args)
#define L_AZURE(args...) L(LOG_DEBUG, AZURE, args)
#define L_STACKED_AZURE(args...) L_STACKED(LOG_DEBUG, AZURE, args)

#define BEIGE rgb(245, 245, 220)
#define L_UNINDENTED_BEIGE(args...) L_UNINDENTED(LOG_DEBUG, BEIGE, args)
#define L_BEIGE(args...) L(LOG_DEBUG, BEIGE, args)
#define L_STACKED_BEIGE(args...) L_STACKED(LOG_DEBUG, BEIGE, args)

#define BISQUE rgb(255, 228, 196)
#define L_UNINDENTED_BISQUE(args...) L_UNINDENTED(LOG_DEBUG, BISQUE, args)
#define L_BISQUE(args...) L(LOG_DEBUG, BISQUE, args)
#define L_STACKED_BISQUE(args...) L_STACKED(LOG_DEBUG, BISQUE, args)

#define BLACK rgb(0, 0, 0)
#define L_UNINDENTED_BLACK(args...) L_UNINDENTED(LOG_DEBUG, BLACK, args)
#define L_BLACK(args...) L(LOG_DEBUG, BLACK, args)
#define L_STACKED_BLACK(args...) L_STACKED(LOG_DEBUG, BLACK, args)

#define BLANCHED_ALMOND rgb(255, 235, 205)
#define L_UNINDENTED_BLANCHED_ALMOND(args...) L_UNINDENTED(LOG_DEBUG, BLANCHED_ALMOND, args)
#define L_BLANCHED_ALMOND(args...) L(LOG_DEBUG, BLANCHED_ALMOND, args)
#define L_STACKED_BLANCHED_ALMOND(args...) L_STACKED(LOG_DEBUG, BLANCHED_ALMOND, args)

#define BLUE rgb(0, 0, 255)
#define L_UNINDENTED_BLUE(args...) L_UNINDENTED(LOG_DEBUG, BLUE, args)
#define L_BLUE(args...) L(LOG_DEBUG, BLUE, args)
#define L_STACKED_BLUE(args...) L_STACKED(LOG_DEBUG, BLUE, args)

#define BLUE_VIOLET rgb(138, 43, 226)
#define L_UNINDENTED_BLUE_VIOLET(args...) L_UNINDENTED(LOG_DEBUG, BLUE_VIOLET, args)
#define L_BLUE_VIOLET(args...) L(LOG_DEBUG, BLUE_VIOLET, args)
#define L_STACKED_BLUE_VIOLET(args...) L_STACKED(LOG_DEBUG, BLUE_VIOLET, args)

#define BROWN rgb(165, 42, 42)
#define L_UNINDENTED_BROWN(args...) L_UNINDENTED(LOG_DEBUG, BROWN, args)
#define L_BROWN(args...) L(LOG_DEBUG, BROWN, args)
#define L_STACKED_BROWN(args...) L_STACKED(LOG_DEBUG, BROWN, args)

#define BURLY_WOOD rgb(222, 184, 135)
#define L_UNINDENTED_BURLY_WOOD(args...) L_UNINDENTED(LOG_DEBUG, BURLY_WOOD, args)
#define L_BURLY_WOOD(args...) L(LOG_DEBUG, BURLY_WOOD, args)
#define L_STACKED_BURLY_WOOD(args...) L_STACKED(LOG_DEBUG, BURLY_WOOD, args)

#define CADET_BLUE rgb(95, 158, 160)
#define L_UNINDENTED_CADET_BLUE(args...) L_UNINDENTED(LOG_DEBUG, CADET_BLUE, args)
#define L_CADET_BLUE(args...) L(LOG_DEBUG, CADET_BLUE, args)
#define L_STACKED_CADET_BLUE(args...) L_STACKED(LOG_DEBUG, CADET_BLUE, args)

#define CHARTREUSE rgb(127, 255, 0)
#define L_UNINDENTED_CHARTREUSE(args...) L_UNINDENTED(LOG_DEBUG, CHARTREUSE, args)
#define L_CHARTREUSE(args...) L(LOG_DEBUG, CHARTREUSE, args)
#define L_STACKED_CHARTREUSE(args...) L_STACKED(LOG_DEBUG, CHARTREUSE, args)

#define CHOCOLATE rgb(210, 105, 30)
#define L_UNINDENTED_CHOCOLATE(args...) L_UNINDENTED(LOG_DEBUG, CHOCOLATE, args)
#define L_CHOCOLATE(args...) L(LOG_DEBUG, CHOCOLATE, args)
#define L_STACKED_CHOCOLATE(args...) L_STACKED(LOG_DEBUG, CHOCOLATE, args)

#define CORAL rgb(255, 127, 80)
#define L_UNINDENTED_CORAL(args...) L_UNINDENTED(LOG_DEBUG, CORAL, args)
#define L_CORAL(args...) L(LOG_DEBUG, CORAL, args)
#define L_STACKED_CORAL(args...) L_STACKED(LOG_DEBUG, CORAL, args)

#define CORNFLOWER_BLUE rgb(100, 149, 237)
#define L_UNINDENTED_CORNFLOWER_BLUE(args...) L_UNINDENTED(LOG_DEBUG, CORNFLOWER_BLUE, args)
#define L_CORNFLOWER_BLUE(args...) L(LOG_DEBUG, CORNFLOWER_BLUE, args)
#define L_STACKED_CORNFLOWER_BLUE(args...) L_STACKED(LOG_DEBUG, CORNFLOWER_BLUE, args)

#define CORNSILK rgb(255, 248, 220)
#define L_UNINDENTED_CORNSILK(args...) L_UNINDENTED(LOG_DEBUG, CORNSILK, args)
#define L_CORNSILK(args...) L(LOG_DEBUG, CORNSILK, args)
#define L_STACKED_CORNSILK(args...) L_STACKED(LOG_DEBUG, CORNSILK, args)

#define CRIMSON rgb(220, 20, 60)
#define L_UNINDENTED_CRIMSON(args...) L_UNINDENTED(LOG_DEBUG, CRIMSON, args)
#define L_CRIMSON(args...) L(LOG_DEBUG, CRIMSON, args)
#define L_STACKED_CRIMSON(args...) L_STACKED(LOG_DEBUG, CRIMSON, args)

#define CYAN rgb(0, 255, 255)
#define L_UNINDENTED_CYAN(args...) L_UNINDENTED(LOG_DEBUG, CYAN, args)
#define L_CYAN(args...) L(LOG_DEBUG, CYAN, args)
#define L_STACKED_CYAN(args...) L_STACKED(LOG_DEBUG, CYAN, args)

#define DARK_BLUE rgb(0, 0, 139)
#define L_UNINDENTED_DARK_BLUE(args...) L_UNINDENTED(LOG_DEBUG, DARK_BLUE, args)
#define L_DARK_BLUE(args...) L(LOG_DEBUG, DARK_BLUE, args)
#define L_STACKED_DARK_BLUE(args...) L_STACKED(LOG_DEBUG, DARK_BLUE, args)

#define DARK_CYAN rgb(0, 139, 139)
#define L_UNINDENTED_DARK_CYAN(args...) L_UNINDENTED(LOG_DEBUG, DARK_CYAN, args)
#define L_DARK_CYAN(args...) L(LOG_DEBUG, DARK_CYAN, args)
#define L_STACKED_DARK_CYAN(args...) L_STACKED(LOG_DEBUG, DARK_CYAN, args)

#define DARK_GOLDEN_ROD rgb(184, 134, 11)
#define L_UNINDENTED_DARK_GOLDEN_ROD(args...) L_UNINDENTED(LOG_DEBUG, DARK_GOLDEN_ROD, args)
#define L_DARK_GOLDEN_ROD(args...) L(LOG_DEBUG, DARK_GOLDEN_ROD, args)
#define L_STACKED_DARK_GOLDEN_ROD(args...) L_STACKED(LOG_DEBUG, DARK_GOLDEN_ROD, args)

#define DARK_GRAY rgb(169, 169, 169)
#define L_UNINDENTED_DARK_GRAY(args...) L_UNINDENTED(LOG_DEBUG, DARK_GRAY, args)
#define L_DARK_GRAY(args...) L(LOG_DEBUG, DARK_GRAY, args)
#define L_STACKED_DARK_GRAY(args...) L_STACKED(LOG_DEBUG, DARK_GRAY, args)

#define DARK_GREEN rgb(0, 100, 0)
#define L_UNINDENTED_DARK_GREEN(args...) L_UNINDENTED(LOG_DEBUG, DARK_GREEN, args)
#define L_DARK_GREEN(args...) L(LOG_DEBUG, DARK_GREEN, args)
#define L_STACKED_DARK_GREEN(args...) L_STACKED(LOG_DEBUG, DARK_GREEN, args)

#define DARK_GREY rgb(169, 169, 169)
#define L_UNINDENTED_DARK_GREY(args...) L_UNINDENTED(LOG_DEBUG, DARK_GREY, args)
#define L_DARK_GREY(args...) L(LOG_DEBUG, DARK_GREY, args)
#define L_STACKED_DARK_GREY(args...) L_STACKED(LOG_DEBUG, DARK_GREY, args)

#define DARK_KHAKI rgb(189, 183, 107)
#define L_UNINDENTED_DARK_KHAKI(args...) L_UNINDENTED(LOG_DEBUG, DARK_KHAKI, args)
#define L_DARK_KHAKI(args...) L(LOG_DEBUG, DARK_KHAKI, args)
#define L_STACKED_DARK_KHAKI(args...) L_STACKED(LOG_DEBUG, DARK_KHAKI, args)

#define DARK_MAGENTA rgb(139, 0, 139)
#define L_UNINDENTED_DARK_MAGENTA(args...) L_UNINDENTED(LOG_DEBUG, DARK_MAGENTA, args)
#define L_DARK_MAGENTA(args...) L(LOG_DEBUG, DARK_MAGENTA, args)
#define L_STACKED_DARK_MAGENTA(args...) L_STACKED(LOG_DEBUG, DARK_MAGENTA, args)

#define DARK_OLIVE_GREEN rgb(85, 107, 47)
#define L_UNINDENTED_DARK_OLIVE_GREEN(args...) L_UNINDENTED(LOG_DEBUG, DARK_OLIVE_GREEN, args)
#define L_DARK_OLIVE_GREEN(args...) L(LOG_DEBUG, DARK_OLIVE_GREEN, args)
#define L_STACKED_DARK_OLIVE_GREEN(args...) L_STACKED(LOG_DEBUG, DARK_OLIVE_GREEN, args)

#define DARK_ORANGE rgb(255, 140, 0)
#define L_UNINDENTED_DARK_ORANGE(args...) L_UNINDENTED(LOG_DEBUG, DARK_ORANGE, args)
#define L_DARK_ORANGE(args...) L(LOG_DEBUG, DARK_ORANGE, args)
#define L_STACKED_DARK_ORANGE(args...) L_STACKED(LOG_DEBUG, DARK_ORANGE, args)

#define DARK_ORCHID rgb(153, 50, 204)
#define L_UNINDENTED_DARK_ORCHID(args...) L_UNINDENTED(LOG_DEBUG, DARK_ORCHID, args)
#define L_DARK_ORCHID(args...) L(LOG_DEBUG, DARK_ORCHID, args)
#define L_STACKED_DARK_ORCHID(args...) L_STACKED(LOG_DEBUG, DARK_ORCHID, args)

#define DARK_RED rgb(139, 0, 0)
#define L_UNINDENTED_DARK_RED(args...) L_UNINDENTED(LOG_DEBUG, DARK_RED, args)
#define L_DARK_RED(args...) L(LOG_DEBUG, DARK_RED, args)
#define L_STACKED_DARK_RED(args...) L_STACKED(LOG_DEBUG, DARK_RED, args)

#define DARK_SALMON rgb(233, 150, 122)
#define L_UNINDENTED_DARK_SALMON(args...) L_UNINDENTED(LOG_DEBUG, DARK_SALMON, args)
#define L_DARK_SALMON(args...) L(LOG_DEBUG, DARK_SALMON, args)
#define L_STACKED_DARK_SALMON(args...) L_STACKED(LOG_DEBUG, DARK_SALMON, args)

#define DARK_SEA_GREEN rgb(143, 188, 143)
#define L_UNINDENTED_DARK_SEA_GREEN(args...) L_UNINDENTED(LOG_DEBUG, DARK_SEA_GREEN, args)
#define L_DARK_SEA_GREEN(args...) L(LOG_DEBUG, DARK_SEA_GREEN, args)
#define L_STACKED_DARK_SEA_GREEN(args...) L_STACKED(LOG_DEBUG, DARK_SEA_GREEN, args)

#define DARK_SLATE_BLUE rgb(72, 61, 139)
#define L_UNINDENTED_DARK_SLATE_BLUE(args...) L_UNINDENTED(LOG_DEBUG, DARK_SLATE_BLUE, args)
#define L_DARK_SLATE_BLUE(args...) L(LOG_DEBUG, DARK_SLATE_BLUE, args)
#define L_STACKED_DARK_SLATE_BLUE(args...) L_STACKED(LOG_DEBUG, DARK_SLATE_BLUE, args)

#define DARK_SLATE_GRAY rgb(47, 79, 79)
#define L_UNINDENTED_DARK_SLATE_GRAY(args...) L_UNINDENTED(LOG_DEBUG, DARK_SLATE_GRAY, args)
#define L_DARK_SLATE_GRAY(args...) L(LOG_DEBUG, DARK_SLATE_GRAY, args)
#define L_STACKED_DARK_SLATE_GRAY(args...) L_STACKED(LOG_DEBUG, DARK_SLATE_GRAY, args)

#define DARK_SLATE_GREY rgb(47, 79, 79)
#define L_UNINDENTED_DARK_SLATE_GREY(args...) L_UNINDENTED(LOG_DEBUG, DARK_SLATE_GREY, args)
#define L_DARK_SLATE_GREY(args...) L(LOG_DEBUG, DARK_SLATE_GREY, args)
#define L_STACKED_DARK_SLATE_GREY(args...) L_STACKED(LOG_DEBUG, DARK_SLATE_GREY, args)

#define DARK_TURQUOISE rgb(0, 206, 209)
#define L_UNINDENTED_DARK_TURQUOISE(args...) L_UNINDENTED(LOG_DEBUG, DARK_TURQUOISE, args)
#define L_DARK_TURQUOISE(args...) L(LOG_DEBUG, DARK_TURQUOISE, args)
#define L_STACKED_DARK_TURQUOISE(args...) L_STACKED(LOG_DEBUG, DARK_TURQUOISE, args)

#define DARK_VIOLET rgb(148, 0, 211)
#define L_UNINDENTED_DARK_VIOLET(args...) L_UNINDENTED(LOG_DEBUG, DARK_VIOLET, args)
#define L_DARK_VIOLET(args...) L(LOG_DEBUG, DARK_VIOLET, args)
#define L_STACKED_DARK_VIOLET(args...) L_STACKED(LOG_DEBUG, DARK_VIOLET, args)

#define DEEP_PINK rgb(255, 20, 147)
#define L_UNINDENTED_DEEP_PINK(args...) L_UNINDENTED(LOG_DEBUG, DEEP_PINK, args)
#define L_DEEP_PINK(args...) L(LOG_DEBUG, DEEP_PINK, args)
#define L_STACKED_DEEP_PINK(args...) L_STACKED(LOG_DEBUG, DEEP_PINK, args)

#define DEEP_SKY_BLUE rgb(0, 191, 255)
#define L_UNINDENTED_DEEP_SKY_BLUE(args...) L_UNINDENTED(LOG_DEBUG, DEEP_SKY_BLUE, args)
#define L_DEEP_SKY_BLUE(args...) L(LOG_DEBUG, DEEP_SKY_BLUE, args)
#define L_STACKED_DEEP_SKY_BLUE(args...) L_STACKED(LOG_DEBUG, DEEP_SKY_BLUE, args)

#define DIM_GRAY rgb(105, 105, 105)
#define L_UNINDENTED_DIM_GRAY(args...) L_UNINDENTED(LOG_DEBUG, DIM_GRAY, args)
#define L_DIM_GRAY(args...) L(LOG_DEBUG, DIM_GRAY, args)
#define L_STACKED_DIM_GRAY(args...) L_STACKED(LOG_DEBUG, DIM_GRAY, args)

#define DIM_GREY rgb(105, 105, 105)
#define L_UNINDENTED_DIM_GREY(args...) L_UNINDENTED(LOG_DEBUG, DIM_GREY, args)
#define L_DIM_GREY(args...) L(LOG_DEBUG, DIM_GREY, args)
#define L_STACKED_DIM_GREY(args...) L_STACKED(LOG_DEBUG, DIM_GREY, args)

#define DODGER_BLUE rgb(30, 144, 255)
#define L_UNINDENTED_DODGER_BLUE(args...) L_UNINDENTED(LOG_DEBUG, DODGER_BLUE, args)
#define L_DODGER_BLUE(args...) L(LOG_DEBUG, DODGER_BLUE, args)
#define L_STACKED_DODGER_BLUE(args...) L_STACKED(LOG_DEBUG, DODGER_BLUE, args)

#define FIRE_BRICK rgb(178, 34, 34)
#define L_UNINDENTED_FIRE_BRICK(args...) L_UNINDENTED(LOG_DEBUG, FIRE_BRICK, args)
#define L_FIRE_BRICK(args...) L(LOG_DEBUG, FIRE_BRICK, args)
#define L_STACKED_FIRE_BRICK(args...) L_STACKED(LOG_DEBUG, FIRE_BRICK, args)

#define FLORAL_WHITE rgb(255, 250, 240)
#define L_UNINDENTED_FLORAL_WHITE(args...) L_UNINDENTED(LOG_DEBUG, FLORAL_WHITE, args)
#define L_FLORAL_WHITE(args...) L(LOG_DEBUG, FLORAL_WHITE, args)
#define L_STACKED_FLORAL_WHITE(args...) L_STACKED(LOG_DEBUG, FLORAL_WHITE, args)

#define FOREST_GREEN rgb(34, 139, 34)
#define L_UNINDENTED_FOREST_GREEN(args...) L_UNINDENTED(LOG_DEBUG, FOREST_GREEN, args)
#define L_FOREST_GREEN(args...) L(LOG_DEBUG, FOREST_GREEN, args)
#define L_STACKED_FOREST_GREEN(args...) L_STACKED(LOG_DEBUG, FOREST_GREEN, args)

#define FUCHSIA rgb(255, 0, 255)
#define L_UNINDENTED_FUCHSIA(args...) L_UNINDENTED(LOG_DEBUG, FUCHSIA, args)
#define L_FUCHSIA(args...) L(LOG_DEBUG, FUCHSIA, args)
#define L_STACKED_FUCHSIA(args...) L_STACKED(LOG_DEBUG, FUCHSIA, args)

#define GAINSBORO rgb(220, 220, 220)
#define L_UNINDENTED_GAINSBORO(args...) L_UNINDENTED(LOG_DEBUG, GAINSBORO, args)
#define L_GAINSBORO(args...) L(LOG_DEBUG, GAINSBORO, args)
#define L_STACKED_GAINSBORO(args...) L_STACKED(LOG_DEBUG, GAINSBORO, args)

#define GHOST_WHITE rgb(248, 248, 255)
#define L_UNINDENTED_GHOST_WHITE(args...) L_UNINDENTED(LOG_DEBUG, GHOST_WHITE, args)
#define L_GHOST_WHITE(args...) L(LOG_DEBUG, GHOST_WHITE, args)
#define L_STACKED_GHOST_WHITE(args...) L_STACKED(LOG_DEBUG, GHOST_WHITE, args)

#define GOLD rgb(255, 215, 0)
#define L_UNINDENTED_GOLD(args...) L_UNINDENTED(LOG_DEBUG, GOLD, args)
#define L_GOLD(args...) L(LOG_DEBUG, GOLD, args)
#define L_STACKED_GOLD(args...) L_STACKED(LOG_DEBUG, GOLD, args)

#define GOLDEN_ROD rgb(218, 165, 32)
#define L_UNINDENTED_GOLDEN_ROD(args...) L_UNINDENTED(LOG_DEBUG, GOLDEN_ROD, args)
#define L_GOLDEN_ROD(args...) L(LOG_DEBUG, GOLDEN_ROD, args)
#define L_STACKED_GOLDEN_ROD(args...) L_STACKED(LOG_DEBUG, GOLDEN_ROD, args)

#define GRAY rgb(128, 128, 128)
#define L_UNINDENTED_GRAY(args...) L_UNINDENTED(LOG_DEBUG, GRAY, args)
#define L_GRAY(args...) L(LOG_DEBUG, GRAY, args)
#define L_STACKED_GRAY(args...) L_STACKED(LOG_DEBUG, GRAY, args)

#define GREEN rgb(0, 128, 0)
#define L_UNINDENTED_GREEN(args...) L_UNINDENTED(LOG_DEBUG, GREEN, args)
#define L_GREEN(args...) L(LOG_DEBUG, GREEN, args)
#define L_STACKED_GREEN(args...) L_STACKED(LOG_DEBUG, GREEN, args)

#define GREEN_YELLOW rgb(173, 255, 47)
#define L_UNINDENTED_GREEN_YELLOW(args...) L_UNINDENTED(LOG_DEBUG, GREEN_YELLOW, args)
#define L_GREEN_YELLOW(args...) L(LOG_DEBUG, GREEN_YELLOW, args)
#define L_STACKED_GREEN_YELLOW(args...) L_STACKED(LOG_DEBUG, GREEN_YELLOW, args)

#define GREY rgb(128, 128, 128)
#define L_UNINDENTED_GREY(args...) L_UNINDENTED(LOG_DEBUG, GREY, args)
#define L_GREY(args...) L(LOG_DEBUG, GREY, args)
#define L_STACKED_GREY(args...) L_STACKED(LOG_DEBUG, GREY, args)

#define HONEY_DEW rgb(240, 255, 240)
#define L_UNINDENTED_HONEY_DEW(args...) L_UNINDENTED(LOG_DEBUG, HONEY_DEW, args)
#define L_HONEY_DEW(args...) L(LOG_DEBUG, HONEY_DEW, args)
#define L_STACKED_HONEY_DEW(args...) L_STACKED(LOG_DEBUG, HONEY_DEW, args)

#define HOT_PINK rgb(255, 105, 180)
#define L_UNINDENTED_HOT_PINK(args...) L_UNINDENTED(LOG_DEBUG, HOT_PINK, args)
#define L_HOT_PINK(args...) L(LOG_DEBUG, HOT_PINK, args)
#define L_STACKED_HOT_PINK(args...) L_STACKED(LOG_DEBUG, HOT_PINK, args)

#define INDIAN_RED rgb(205, 92, 92)
#define L_UNINDENTED_INDIAN_RED(args...) L_UNINDENTED(LOG_DEBUG, INDIAN_RED, args)
#define L_INDIAN_RED(args...) L(LOG_DEBUG, INDIAN_RED, args)
#define L_STACKED_INDIAN_RED(args...) L_STACKED(LOG_DEBUG, INDIAN_RED, args)

#define INDIGO rgb(75, 0, 130)
#define L_UNINDENTED_INDIGO(args...) L_UNINDENTED(LOG_DEBUG, INDIGO, args)
#define L_INDIGO(args...) L(LOG_DEBUG, INDIGO, args)
#define L_STACKED_INDIGO(args...) L_STACKED(LOG_DEBUG, INDIGO, args)

#define IVORY rgb(255, 255, 240)
#define L_UNINDENTED_IVORY(args...) L_UNINDENTED(LOG_DEBUG, IVORY, args)
#define L_IVORY(args...) L(LOG_DEBUG, IVORY, args)
#define L_STACKED_IVORY(args...) L_STACKED(LOG_DEBUG, IVORY, args)

#define KHAKI rgb(240, 230, 140)
#define L_UNINDENTED_KHAKI(args...) L_UNINDENTED(LOG_DEBUG, KHAKI, args)
#define L_KHAKI(args...) L(LOG_DEBUG, KHAKI, args)
#define L_STACKED_KHAKI(args...) L_STACKED(LOG_DEBUG, KHAKI, args)

#define LAVENDER rgb(230, 230, 250)
#define L_UNINDENTED_LAVENDER(args...) L_UNINDENTED(LOG_DEBUG, LAVENDER, args)
#define L_LAVENDER(args...) L(LOG_DEBUG, LAVENDER, args)
#define L_STACKED_LAVENDER(args...) L_STACKED(LOG_DEBUG, LAVENDER, args)

#define LAVENDER_BLUSH rgb(255, 240, 245)
#define L_UNINDENTED_LAVENDER_BLUSH(args...) L_UNINDENTED(LOG_DEBUG, LAVENDER_BLUSH, args)
#define L_LAVENDER_BLUSH(args...) L(LOG_DEBUG, LAVENDER_BLUSH, args)
#define L_STACKED_LAVENDER_BLUSH(args...) L_STACKED(LOG_DEBUG, LAVENDER_BLUSH, args)

#define LAWN_GREEN rgb(124, 252, 0)
#define L_UNINDENTED_LAWN_GREEN(args...) L_UNINDENTED(LOG_DEBUG, LAWN_GREEN, args)
#define L_LAWN_GREEN(args...) L(LOG_DEBUG, LAWN_GREEN, args)
#define L_STACKED_LAWN_GREEN(args...) L_STACKED(LOG_DEBUG, LAWN_GREEN, args)

#define LEMON_CHIFFON rgb(255, 250, 205)
#define L_UNINDENTED_LEMON_CHIFFON(args...) L_UNINDENTED(LOG_DEBUG, LEMON_CHIFFON, args)
#define L_LEMON_CHIFFON(args...) L(LOG_DEBUG, LEMON_CHIFFON, args)
#define L_STACKED_LEMON_CHIFFON(args...) L_STACKED(LOG_DEBUG, LEMON_CHIFFON, args)

#define LIGHT_BLUE rgb(173, 216, 230)
#define L_UNINDENTED_LIGHT_BLUE(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_BLUE, args)
#define L_LIGHT_BLUE(args...) L(LOG_DEBUG, LIGHT_BLUE, args)
#define L_STACKED_LIGHT_BLUE(args...) L_STACKED(LOG_DEBUG, LIGHT_BLUE, args)

#define LIGHT_CORAL rgb(240, 128, 128)
#define L_UNINDENTED_LIGHT_CORAL(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_CORAL, args)
#define L_LIGHT_CORAL(args...) L(LOG_DEBUG, LIGHT_CORAL, args)
#define L_STACKED_LIGHT_CORAL(args...) L_STACKED(LOG_DEBUG, LIGHT_CORAL, args)

#define LIGHT_CYAN rgb(224, 255, 255)
#define L_UNINDENTED_LIGHT_CYAN(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_CYAN, args)
#define L_LIGHT_CYAN(args...) L(LOG_DEBUG, LIGHT_CYAN, args)
#define L_STACKED_LIGHT_CYAN(args...) L_STACKED(LOG_DEBUG, LIGHT_CYAN, args)

#define LIGHT_GOLDEN_ROD_YELLOW rgb(250, 250, 210)
#define L_UNINDENTED_LIGHT_GOLDEN_ROD_YELLOW(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_GOLDEN_ROD_YELLOW, args)
#define L_LIGHT_GOLDEN_ROD_YELLOW(args...) L(LOG_DEBUG, LIGHT_GOLDEN_ROD_YELLOW, args)
#define L_STACKED_LIGHT_GOLDEN_ROD_YELLOW(args...) L_STACKED(LOG_DEBUG, LIGHT_GOLDEN_ROD_YELLOW, args)

#define LIGHT_GRAY rgb(211, 211, 211)
#define L_UNINDENTED_LIGHT_GRAY(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_GRAY, args)
#define L_LIGHT_GRAY(args...) L(LOG_DEBUG, LIGHT_GRAY, args)
#define L_STACKED_LIGHT_GRAY(args...) L_STACKED(LOG_DEBUG, LIGHT_GRAY, args)

#define LIGHT_GREEN rgb(144, 238, 144)
#define L_UNINDENTED_LIGHT_GREEN(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_GREEN, args)
#define L_LIGHT_GREEN(args...) L(LOG_DEBUG, LIGHT_GREEN, args)
#define L_STACKED_LIGHT_GREEN(args...) L_STACKED(LOG_DEBUG, LIGHT_GREEN, args)

#define LIGHT_GREY rgb(211, 211, 211)
#define L_UNINDENTED_LIGHT_GREY(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_GREY, args)
#define L_LIGHT_GREY(args...) L(LOG_DEBUG, LIGHT_GREY, args)
#define L_STACKED_LIGHT_GREY(args...) L_STACKED(LOG_DEBUG, LIGHT_GREY, args)

#define LIGHT_PINK rgb(255, 182, 193)
#define L_UNINDENTED_LIGHT_PINK(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_PINK, args)
#define L_LIGHT_PINK(args...) L(LOG_DEBUG, LIGHT_PINK, args)
#define L_STACKED_LIGHT_PINK(args...) L_STACKED(LOG_DEBUG, LIGHT_PINK, args)

#define LIGHT_PURPLE rgb(232, 10, 180)
#define L_UNINDENTED_LIGHT_PURPLE(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_PURPLE, args)
#define L_LIGHT_PURPLE(args...) L(LOG_DEBUG, LIGHT_PURPLE, args)
#define L_STACKED_LIGHT_PURPLE(args...) L_STACKED(LOG_DEBUG, LIGHT_PURPLE, args)

#define LIGHT_RED rgb(232, 25, 10)
#define L_UNINDENTED_LIGHT_RED(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_RED, args)
#define L_LIGHT_RED(args...) L(LOG_DEBUG, LIGHT_RED, args)
#define L_STACKED_LIGHT_RED(args...) L_STACKED(LOG_DEBUG, LIGHT_RED, args)

#define LIGHT_SALMON rgb(255, 160, 122)
#define L_UNINDENTED_LIGHT_SALMON(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_SALMON, args)
#define L_LIGHT_SALMON(args...) L(LOG_DEBUG, LIGHT_SALMON, args)
#define L_STACKED_LIGHT_SALMON(args...) L_STACKED(LOG_DEBUG, LIGHT_SALMON, args)

#define LIGHT_SEA_GREEN rgb(32, 178, 170)
#define L_UNINDENTED_LIGHT_SEA_GREEN(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_SEA_GREEN, args)
#define L_LIGHT_SEA_GREEN(args...) L(LOG_DEBUG, LIGHT_SEA_GREEN, args)
#define L_STACKED_LIGHT_SEA_GREEN(args...) L_STACKED(LOG_DEBUG, LIGHT_SEA_GREEN, args)

#define LIGHT_SKY_BLUE rgb(135, 206, 250)
#define L_UNINDENTED_LIGHT_SKY_BLUE(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_SKY_BLUE, args)
#define L_LIGHT_SKY_BLUE(args...) L(LOG_DEBUG, LIGHT_SKY_BLUE, args)
#define L_STACKED_LIGHT_SKY_BLUE(args...) L_STACKED(LOG_DEBUG, LIGHT_SKY_BLUE, args)

#define LIGHT_SLATE_GRAY rgb(119, 136, 153)
#define L_UNINDENTED_LIGHT_SLATE_GRAY(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_SLATE_GRAY, args)
#define L_LIGHT_SLATE_GRAY(args...) L(LOG_DEBUG, LIGHT_SLATE_GRAY, args)
#define L_STACKED_LIGHT_SLATE_GRAY(args...) L_STACKED(LOG_DEBUG, LIGHT_SLATE_GRAY, args)

#define LIGHT_SLATE_GREY rgb(119, 136, 153)
#define L_UNINDENTED_LIGHT_SLATE_GREY(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_SLATE_GREY, args)
#define L_LIGHT_SLATE_GREY(args...) L(LOG_DEBUG, LIGHT_SLATE_GREY, args)
#define L_STACKED_LIGHT_SLATE_GREY(args...) L_STACKED(LOG_DEBUG, LIGHT_SLATE_GREY, args)

#define LIGHT_STEEL_BLUE rgb(176, 196, 222)
#define L_UNINDENTED_LIGHT_STEEL_BLUE(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_STEEL_BLUE, args)
#define L_LIGHT_STEEL_BLUE(args...) L(LOG_DEBUG, LIGHT_STEEL_BLUE, args)
#define L_STACKED_LIGHT_STEEL_BLUE(args...) L_STACKED(LOG_DEBUG, LIGHT_STEEL_BLUE, args)

#define LIGHT_YELLOW rgb(255, 255, 224)
#define L_UNINDENTED_LIGHT_YELLOW(args...) L_UNINDENTED(LOG_DEBUG, LIGHT_YELLOW, args)
#define L_LIGHT_YELLOW(args...) L(LOG_DEBUG, LIGHT_YELLOW, args)
#define L_STACKED_LIGHT_YELLOW(args...) L_STACKED(LOG_DEBUG, LIGHT_YELLOW, args)

#define LIME rgb(0, 255, 0)
#define L_UNINDENTED_LIME(args...) L_UNINDENTED(LOG_DEBUG, LIME, args)
#define L_LIME(args...) L(LOG_DEBUG, LIME, args)
#define L_STACKED_LIME(args...) L_STACKED(LOG_DEBUG, LIME, args)

#define LIME_GREEN rgb(50, 205, 50)
#define L_UNINDENTED_LIME_GREEN(args...) L_UNINDENTED(LOG_DEBUG, LIME_GREEN, args)
#define L_LIME_GREEN(args...) L(LOG_DEBUG, LIME_GREEN, args)
#define L_STACKED_LIME_GREEN(args...) L_STACKED(LOG_DEBUG, LIME_GREEN, args)

#define LINEN rgb(250, 240, 230)
#define L_UNINDENTED_LINEN(args...) L_UNINDENTED(LOG_DEBUG, LINEN, args)
#define L_LINEN(args...) L(LOG_DEBUG, LINEN, args)
#define L_STACKED_LINEN(args...) L_STACKED(LOG_DEBUG, LINEN, args)

#define MAGENTA rgb(255, 0, 255)
#define L_UNINDENTED_MAGENTA(args...) L_UNINDENTED(LOG_DEBUG, MAGENTA, args)
#define L_MAGENTA(args...) L(LOG_DEBUG, MAGENTA, args)
#define L_STACKED_MAGENTA(args...) L_STACKED(LOG_DEBUG, MAGENTA, args)

#define MAROON rgb(128, 0, 0)
#define L_UNINDENTED_MAROON(args...) L_UNINDENTED(LOG_DEBUG, MAROON, args)
#define L_MAROON(args...) L(LOG_DEBUG, MAROON, args)
#define L_STACKED_MAROON(args...) L_STACKED(LOG_DEBUG, MAROON, args)

#define MEDIUM_AQUA_MARINE rgb(102, 205, 170)
#define L_UNINDENTED_MEDIUM_AQUA_MARINE(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_AQUA_MARINE, args)
#define L_MEDIUM_AQUA_MARINE(args...) L(LOG_DEBUG, MEDIUM_AQUA_MARINE, args)
#define L_STACKED_MEDIUM_AQUA_MARINE(args...) L_STACKED(LOG_DEBUG, MEDIUM_AQUA_MARINE, args)

#define MEDIUM_BLUE rgb(0, 0, 205)
#define L_UNINDENTED_MEDIUM_BLUE(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_BLUE, args)
#define L_MEDIUM_BLUE(args...) L(LOG_DEBUG, MEDIUM_BLUE, args)
#define L_STACKED_MEDIUM_BLUE(args...) L_STACKED(LOG_DEBUG, MEDIUM_BLUE, args)

#define MEDIUM_ORCHID rgb(186, 85, 211)
#define L_UNINDENTED_MEDIUM_ORCHID(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_ORCHID, args)
#define L_MEDIUM_ORCHID(args...) L(LOG_DEBUG, MEDIUM_ORCHID, args)
#define L_STACKED_MEDIUM_ORCHID(args...) L_STACKED(LOG_DEBUG, MEDIUM_ORCHID, args)

#define MEDIUM_PURPLE rgb(147, 112, 216)
#define L_UNINDENTED_MEDIUM_PURPLE(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_PURPLE, args)
#define L_MEDIUM_PURPLE(args...) L(LOG_DEBUG, MEDIUM_PURPLE, args)
#define L_STACKED_MEDIUM_PURPLE(args...) L_STACKED(LOG_DEBUG, MEDIUM_PURPLE, args)

#define MEDIUM_SEA_GREEN rgb(60, 179, 113)
#define L_UNINDENTED_MEDIUM_SEA_GREEN(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_SEA_GREEN, args)
#define L_MEDIUM_SEA_GREEN(args...) L(LOG_DEBUG, MEDIUM_SEA_GREEN, args)
#define L_STACKED_MEDIUM_SEA_GREEN(args...) L_STACKED(LOG_DEBUG, MEDIUM_SEA_GREEN, args)

#define MEDIUM_SLATE_BLUE rgb(123, 104, 238)
#define L_UNINDENTED_MEDIUM_SLATE_BLUE(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_SLATE_BLUE, args)
#define L_MEDIUM_SLATE_BLUE(args...) L(LOG_DEBUG, MEDIUM_SLATE_BLUE, args)
#define L_STACKED_MEDIUM_SLATE_BLUE(args...) L_STACKED(LOG_DEBUG, MEDIUM_SLATE_BLUE, args)

#define MEDIUM_SPRING_GREEN rgb(0, 250, 154)
#define L_UNINDENTED_MEDIUM_SPRING_GREEN(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_SPRING_GREEN, args)
#define L_MEDIUM_SPRING_GREEN(args...) L(LOG_DEBUG, MEDIUM_SPRING_GREEN, args)
#define L_STACKED_MEDIUM_SPRING_GREEN(args...) L_STACKED(LOG_DEBUG, MEDIUM_SPRING_GREEN, args)

#define MEDIUM_TURQUOISE rgb(72, 209, 204)
#define L_UNINDENTED_MEDIUM_TURQUOISE(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_TURQUOISE, args)
#define L_MEDIUM_TURQUOISE(args...) L(LOG_DEBUG, MEDIUM_TURQUOISE, args)
#define L_STACKED_MEDIUM_TURQUOISE(args...) L_STACKED(LOG_DEBUG, MEDIUM_TURQUOISE, args)

#define MEDIUM_VIOLET_RED rgb(199, 21, 133)
#define L_UNINDENTED_MEDIUM_VIOLET_RED(args...) L_UNINDENTED(LOG_DEBUG, MEDIUM_VIOLET_RED, args)
#define L_MEDIUM_VIOLET_RED(args...) L(LOG_DEBUG, MEDIUM_VIOLET_RED, args)
#define L_STACKED_MEDIUM_VIOLET_RED(args...) L_STACKED(LOG_DEBUG, MEDIUM_VIOLET_RED, args)

#define MIDNIGHT_BLUE rgb(25, 25, 112)
#define L_UNINDENTED_MIDNIGHT_BLUE(args...) L_UNINDENTED(LOG_DEBUG, MIDNIGHT_BLUE, args)
#define L_MIDNIGHT_BLUE(args...) L(LOG_DEBUG, MIDNIGHT_BLUE, args)
#define L_STACKED_MIDNIGHT_BLUE(args...) L_STACKED(LOG_DEBUG, MIDNIGHT_BLUE, args)

#define MINT_CREAM rgb(245, 255, 250)
#define L_UNINDENTED_MINT_CREAM(args...) L_UNINDENTED(LOG_DEBUG, MINT_CREAM, args)
#define L_MINT_CREAM(args...) L(LOG_DEBUG, MINT_CREAM, args)
#define L_STACKED_MINT_CREAM(args...) L_STACKED(LOG_DEBUG, MINT_CREAM, args)

#define MISTY_ROSE rgb(255, 228, 225)
#define L_UNINDENTED_MISTY_ROSE(args...) L_UNINDENTED(LOG_DEBUG, MISTY_ROSE, args)
#define L_MISTY_ROSE(args...) L(LOG_DEBUG, MISTY_ROSE, args)
#define L_STACKED_MISTY_ROSE(args...) L_STACKED(LOG_DEBUG, MISTY_ROSE, args)

#define MOCCASIN rgb(255, 228, 181)
#define L_UNINDENTED_MOCCASIN(args...) L_UNINDENTED(LOG_DEBUG, MOCCASIN, args)
#define L_MOCCASIN(args...) L(LOG_DEBUG, MOCCASIN, args)
#define L_STACKED_MOCCASIN(args...) L_STACKED(LOG_DEBUG, MOCCASIN, args)

#define NAVAJO_WHITE rgb(255, 222, 173)
#define L_UNINDENTED_NAVAJO_WHITE(args...) L_UNINDENTED(LOG_DEBUG, NAVAJO_WHITE, args)
#define L_NAVAJO_WHITE(args...) L(LOG_DEBUG, NAVAJO_WHITE, args)
#define L_STACKED_NAVAJO_WHITE(args...) L_STACKED(LOG_DEBUG, NAVAJO_WHITE, args)

#define NAVY rgb(0, 0, 128)
#define L_UNINDENTED_NAVY(args...) L_UNINDENTED(LOG_DEBUG, NAVY, args)
#define L_NAVY(args...) L(LOG_DEBUG, NAVY, args)
#define L_STACKED_NAVY(args...) L_STACKED(LOG_DEBUG, NAVY, args)

#define OLD_LACE rgb(253, 245, 230)
#define L_UNINDENTED_OLD_LACE(args...) L_UNINDENTED(LOG_DEBUG, OLD_LACE, args)
#define L_OLD_LACE(args...) L(LOG_DEBUG, OLD_LACE, args)
#define L_STACKED_OLD_LACE(args...) L_STACKED(LOG_DEBUG, OLD_LACE, args)

#define OLIVE rgb(128, 128, 0)
#define L_UNINDENTED_OLIVE(args...) L_UNINDENTED(LOG_DEBUG, OLIVE, args)
#define L_OLIVE(args...) L(LOG_DEBUG, OLIVE, args)
#define L_STACKED_OLIVE(args...) L_STACKED(LOG_DEBUG, OLIVE, args)

#define OLIVE_DRAB rgb(107, 142, 35)
#define L_UNINDENTED_OLIVE_DRAB(args...) L_UNINDENTED(LOG_DEBUG, OLIVE_DRAB, args)
#define L_OLIVE_DRAB(args...) L(LOG_DEBUG, OLIVE_DRAB, args)
#define L_STACKED_OLIVE_DRAB(args...) L_STACKED(LOG_DEBUG, OLIVE_DRAB, args)

#define ORANGE rgb(255, 165, 0)
#define L_UNINDENTED_ORANGE(args...) L_UNINDENTED(LOG_DEBUG, ORANGE, args)
#define L_ORANGE(args...) L(LOG_DEBUG, ORANGE, args)
#define L_STACKED_ORANGE(args...) L_STACKED(LOG_DEBUG, ORANGE, args)

#define ORANGE_RED rgb(255, 69, 0)
#define L_UNINDENTED_ORANGE_RED(args...) L_UNINDENTED(LOG_DEBUG, ORANGE_RED, args)
#define L_ORANGE_RED(args...) L(LOG_DEBUG, ORANGE_RED, args)
#define L_STACKED_ORANGE_RED(args...) L_STACKED(LOG_DEBUG, ORANGE_RED, args)

#define ORCHID rgb(218, 112, 214)
#define L_UNINDENTED_ORCHID(args...) L_UNINDENTED(LOG_DEBUG, ORCHID, args)
#define L_ORCHID(args...) L(LOG_DEBUG, ORCHID, args)
#define L_STACKED_ORCHID(args...) L_STACKED(LOG_DEBUG, ORCHID, args)

#define PALE_GOLDEN_ROD rgb(238, 232, 170)
#define L_UNINDENTED_PALE_GOLDEN_ROD(args...) L_UNINDENTED(LOG_DEBUG, PALE_GOLDEN_ROD, args)
#define L_PALE_GOLDEN_ROD(args...) L(LOG_DEBUG, PALE_GOLDEN_ROD, args)
#define L_STACKED_PALE_GOLDEN_ROD(args...) L_STACKED(LOG_DEBUG, PALE_GOLDEN_ROD, args)

#define PALE_GREEN rgb(152, 251, 152)
#define L_UNINDENTED_PALE_GREEN(args...) L_UNINDENTED(LOG_DEBUG, PALE_GREEN, args)
#define L_PALE_GREEN(args...) L(LOG_DEBUG, PALE_GREEN, args)
#define L_STACKED_PALE_GREEN(args...) L_STACKED(LOG_DEBUG, PALE_GREEN, args)

#define PALE_TURQUOISE rgb(175, 238, 238)
#define L_UNINDENTED_PALE_TURQUOISE(args...) L_UNINDENTED(LOG_DEBUG, PALE_TURQUOISE, args)
#define L_PALE_TURQUOISE(args...) L(LOG_DEBUG, PALE_TURQUOISE, args)
#define L_STACKED_PALE_TURQUOISE(args...) L_STACKED(LOG_DEBUG, PALE_TURQUOISE, args)

#define PALE_VIOLET_RED rgb(216, 112, 147)
#define L_UNINDENTED_PALE_VIOLET_RED(args...) L_UNINDENTED(LOG_DEBUG, PALE_VIOLET_RED, args)
#define L_PALE_VIOLET_RED(args...) L(LOG_DEBUG, PALE_VIOLET_RED, args)
#define L_STACKED_PALE_VIOLET_RED(args...) L_STACKED(LOG_DEBUG, PALE_VIOLET_RED, args)

#define PAPAYA_WHIP rgb(255, 239, 213)
#define L_UNINDENTED_PAPAYA_WHIP(args...) L_UNINDENTED(LOG_DEBUG, PAPAYA_WHIP, args)
#define L_PAPAYA_WHIP(args...) L(LOG_DEBUG, PAPAYA_WHIP, args)
#define L_STACKED_PAPAYA_WHIP(args...) L_STACKED(LOG_DEBUG, PAPAYA_WHIP, args)

#define PEACH_PUFF rgb(255, 218, 185)
#define L_UNINDENTED_PEACH_PUFF(args...) L_UNINDENTED(LOG_DEBUG, PEACH_PUFF, args)
#define L_PEACH_PUFF(args...) L(LOG_DEBUG, PEACH_PUFF, args)
#define L_STACKED_PEACH_PUFF(args...) L_STACKED(LOG_DEBUG, PEACH_PUFF, args)

#define PERU rgb(205, 133, 63)
#define L_UNINDENTED_PERU(args...) L_UNINDENTED(LOG_DEBUG, PERU, args)
#define L_PERU(args...) L(LOG_DEBUG, PERU, args)
#define L_STACKED_PERU(args...) L_STACKED(LOG_DEBUG, PERU, args)

#define PINK rgb(255, 192, 203)
#define L_UNINDENTED_PINK(args...) L_UNINDENTED(LOG_DEBUG, PINK, args)
#define L_PINK(args...) L(LOG_DEBUG, PINK, args)
#define L_STACKED_PINK(args...) L_STACKED(LOG_DEBUG, PINK, args)

#define PLUM rgb(221, 160, 221)
#define L_UNINDENTED_PLUM(args...) L_UNINDENTED(LOG_DEBUG, PLUM, args)
#define L_PLUM(args...) L(LOG_DEBUG, PLUM, args)
#define L_STACKED_PLUM(args...) L_STACKED(LOG_DEBUG, PLUM, args)

#define POWDER_BLUE rgb(176, 224, 230)
#define L_UNINDENTED_POWDER_BLUE(args...) L_UNINDENTED(LOG_DEBUG, POWDER_BLUE, args)
#define L_POWDER_BLUE(args...) L(LOG_DEBUG, POWDER_BLUE, args)
#define L_STACKED_POWDER_BLUE(args...) L_STACKED(LOG_DEBUG, POWDER_BLUE, args)

#define PURPLE rgb(128, 0, 128)
#define L_UNINDENTED_PURPLE(args...) L_UNINDENTED(LOG_DEBUG, PURPLE, args)
#define L_PURPLE(args...) L(LOG_DEBUG, PURPLE, args)
#define L_STACKED_PURPLE(args...) L_STACKED(LOG_DEBUG, PURPLE, args)

#define RED rgb(255, 0, 0)
#define L_UNINDENTED_RED(args...) L_UNINDENTED(LOG_DEBUG, RED, args)
#define L_RED(args...) L(LOG_DEBUG, RED, args)
#define L_STACKED_RED(args...) L_STACKED(LOG_DEBUG, RED, args)

#define ROSY_BROWN rgb(188, 143, 143)
#define L_UNINDENTED_ROSY_BROWN(args...) L_UNINDENTED(LOG_DEBUG, ROSY_BROWN, args)
#define L_ROSY_BROWN(args...) L(LOG_DEBUG, ROSY_BROWN, args)
#define L_STACKED_ROSY_BROWN(args...) L_STACKED(LOG_DEBUG, ROSY_BROWN, args)

#define ROYAL_BLUE rgb(65, 105, 225)
#define L_UNINDENTED_ROYAL_BLUE(args...) L_UNINDENTED(LOG_DEBUG, ROYAL_BLUE, args)
#define L_ROYAL_BLUE(args...) L(LOG_DEBUG, ROYAL_BLUE, args)
#define L_STACKED_ROYAL_BLUE(args...) L_STACKED(LOG_DEBUG, ROYAL_BLUE, args)

#define SADDLE_BROWN rgb(139, 69, 19)
#define L_UNINDENTED_SADDLE_BROWN(args...) L_UNINDENTED(LOG_DEBUG, SADDLE_BROWN, args)
#define L_SADDLE_BROWN(args...) L(LOG_DEBUG, SADDLE_BROWN, args)
#define L_STACKED_SADDLE_BROWN(args...) L_STACKED(LOG_DEBUG, SADDLE_BROWN, args)

#define SALMON rgb(250, 128, 114)
#define L_UNINDENTED_SALMON(args...) L_UNINDENTED(LOG_DEBUG, SALMON, args)
#define L_SALMON(args...) L(LOG_DEBUG, SALMON, args)
#define L_STACKED_SALMON(args...) L_STACKED(LOG_DEBUG, SALMON, args)

#define SANDY_BROWN rgb(244, 164, 96)
#define L_UNINDENTED_SANDY_BROWN(args...) L_UNINDENTED(LOG_DEBUG, SANDY_BROWN, args)
#define L_SANDY_BROWN(args...) L(LOG_DEBUG, SANDY_BROWN, args)
#define L_STACKED_SANDY_BROWN(args...) L_STACKED(LOG_DEBUG, SANDY_BROWN, args)

#define SEA_GREEN rgb(46, 139, 87)
#define L_UNINDENTED_SEA_GREEN(args...) L_UNINDENTED(LOG_DEBUG, SEA_GREEN, args)
#define L_SEA_GREEN(args...) L(LOG_DEBUG, SEA_GREEN, args)
#define L_STACKED_SEA_GREEN(args...) L_STACKED(LOG_DEBUG, SEA_GREEN, args)

#define SEA_SHELL rgb(255, 245, 238)
#define L_UNINDENTED_SEA_SHELL(args...) L_UNINDENTED(LOG_DEBUG, SEA_SHELL, args)
#define L_SEA_SHELL(args...) L(LOG_DEBUG, SEA_SHELL, args)
#define L_STACKED_SEA_SHELL(args...) L_STACKED(LOG_DEBUG, SEA_SHELL, args)

#define SIENNA rgb(160, 82, 45)
#define L_UNINDENTED_SIENNA(args...) L_UNINDENTED(LOG_DEBUG, SIENNA, args)
#define L_SIENNA(args...) L(LOG_DEBUG, SIENNA, args)
#define L_STACKED_SIENNA(args...) L_STACKED(LOG_DEBUG, SIENNA, args)

#define SILVER rgb(192, 192, 192)
#define L_UNINDENTED_SILVER(args...) L_UNINDENTED(LOG_DEBUG, SILVER, args)
#define L_SILVER(args...) L(LOG_DEBUG, SILVER, args)
#define L_STACKED_SILVER(args...) L_STACKED(LOG_DEBUG, SILVER, args)

#define SKY_BLUE rgb(135, 206, 235)
#define L_UNINDENTED_SKY_BLUE(args...) L_UNINDENTED(LOG_DEBUG, SKY_BLUE, args)
#define L_SKY_BLUE(args...) L(LOG_DEBUG, SKY_BLUE, args)
#define L_STACKED_SKY_BLUE(args...) L_STACKED(LOG_DEBUG, SKY_BLUE, args)

#define SLATE_BLUE rgb(106, 90, 205)
#define L_UNINDENTED_SLATE_BLUE(args...) L_UNINDENTED(LOG_DEBUG, SLATE_BLUE, args)
#define L_SLATE_BLUE(args...) L(LOG_DEBUG, SLATE_BLUE, args)
#define L_STACKED_SLATE_BLUE(args...) L_STACKED(LOG_DEBUG, SLATE_BLUE, args)

#define SLATE_GRAY rgb(112, 128, 144)
#define L_UNINDENTED_SLATE_GRAY(args...) L_UNINDENTED(LOG_DEBUG, SLATE_GRAY, args)
#define L_SLATE_GRAY(args...) L(LOG_DEBUG, SLATE_GRAY, args)
#define L_STACKED_SLATE_GRAY(args...) L_STACKED(LOG_DEBUG, SLATE_GRAY, args)

#define SLATE_GREY rgb(112, 128, 144)
#define L_UNINDENTED_SLATE_GREY(args...) L_UNINDENTED(LOG_DEBUG, SLATE_GREY, args)
#define L_SLATE_GREY(args...) L(LOG_DEBUG, SLATE_GREY, args)
#define L_STACKED_SLATE_GREY(args...) L_STACKED(LOG_DEBUG, SLATE_GREY, args)

#define SNOW rgb(255, 250, 250)
#define L_UNINDENTED_SNOW(args...) L_UNINDENTED(LOG_DEBUG, SNOW, args)
#define L_SNOW(args...) L(LOG_DEBUG, SNOW, args)
#define L_STACKED_SNOW(args...) L_STACKED(LOG_DEBUG, SNOW, args)

#define SPRING_GREEN rgb(0, 255, 127)
#define L_UNINDENTED_SPRING_GREEN(args...) L_UNINDENTED(LOG_DEBUG, SPRING_GREEN, args)
#define L_SPRING_GREEN(args...) L(LOG_DEBUG, SPRING_GREEN, args)
#define L_STACKED_SPRING_GREEN(args...) L_STACKED(LOG_DEBUG, SPRING_GREEN, args)

#define STEEL_BLUE rgb(70, 130, 180)
#define L_UNINDENTED_STEEL_BLUE(args...) L_UNINDENTED(LOG_DEBUG, STEEL_BLUE, args)
#define L_STEEL_BLUE(args...) L(LOG_DEBUG, STEEL_BLUE, args)
#define L_STACKED_STEEL_BLUE(args...) L_STACKED(LOG_DEBUG, STEEL_BLUE, args)

#define TAN rgb(210, 180, 140)
#define L_UNINDENTED_TAN(args...) L_UNINDENTED(LOG_DEBUG, TAN, args)
#define L_TAN(args...) L(LOG_DEBUG, TAN, args)
#define L_STACKED_TAN(args...) L_STACKED(LOG_DEBUG, TAN, args)

#define TEAL rgb(0, 128, 128)
#define L_UNINDENTED_TEAL(args...) L_UNINDENTED(LOG_DEBUG, TEAL, args)
#define L_TEAL(args...) L(LOG_DEBUG, TEAL, args)
#define L_STACKED_TEAL(args...) L_STACKED(LOG_DEBUG, TEAL, args)

#define THISTLE rgb(216, 191, 216)
#define L_UNINDENTED_THISTLE(args...) L_UNINDENTED(LOG_DEBUG, THISTLE, args)
#define L_THISTLE(args...) L(LOG_DEBUG, THISTLE, args)
#define L_STACKED_THISTLE(args...) L_STACKED(LOG_DEBUG, THISTLE, args)

#define TOMATO rgb(255, 99, 71)
#define L_UNINDENTED_TOMATO(args...) L_UNINDENTED(LOG_DEBUG, TOMATO, args)
#define L_TOMATO(args...) L(LOG_DEBUG, TOMATO, args)
#define L_STACKED_TOMATO(args...) L_STACKED(LOG_DEBUG, TOMATO, args)

#define TURQUOISE rgb(64, 224, 208)
#define L_UNINDENTED_TURQUOISE(args...) L_UNINDENTED(LOG_DEBUG, TURQUOISE, args)
#define L_TURQUOISE(args...) L(LOG_DEBUG, TURQUOISE, args)
#define L_STACKED_TURQUOISE(args...) L_STACKED(LOG_DEBUG, TURQUOISE, args)

#define VIOLET rgb(238, 130, 238)
#define L_UNINDENTED_VIOLET(args...) L_UNINDENTED(LOG_DEBUG, VIOLET, args)
#define L_VIOLET(args...) L(LOG_DEBUG, VIOLET, args)
#define L_STACKED_VIOLET(args...) L_STACKED(LOG_DEBUG, VIOLET, args)

#define WHEAT rgb(245, 222, 179)
#define L_UNINDENTED_WHEAT(args...) L_UNINDENTED(LOG_DEBUG, WHEAT, args)
#define L_WHEAT(args...) L(LOG_DEBUG, WHEAT, args)
#define L_STACKED_WHEAT(args...) L_STACKED(LOG_DEBUG, WHEAT, args)

#define WHITE rgb(255, 255, 255)
#define L_UNINDENTED_WHITE(args...) L_UNINDENTED(LOG_DEBUG, WHITE, args)
#define L_WHITE(args...) L(LOG_DEBUG, WHITE, args)
#define L_STACKED_WHITE(args...) L_STACKED(LOG_DEBUG, WHITE, args)

#define WHITE_SMOKE rgb(245, 245, 245)
#define L_UNINDENTED_WHITE_SMOKE(args...) L_UNINDENTED(LOG_DEBUG, WHITE_SMOKE, args)
#define L_WHITE_SMOKE(args...) L(LOG_DEBUG, WHITE_SMOKE, args)
#define L_STACKED_WHITE_SMOKE(args...) L_STACKED(LOG_DEBUG, WHITE_SMOKE, args)

#define YELLOW rgb(255, 255, 0)
#define L_UNINDENTED_YELLOW(args...) L_UNINDENTED(LOG_DEBUG, YELLOW, args)
#define L_YELLOW(args...) L(LOG_DEBUG, YELLOW, args)
#define L_STACKED_YELLOW(args...) L_STACKED(LOG_DEBUG, YELLOW, args)

#define YELLOW_GREEN rgb(154, 205, 50)
#define L_UNINDENTED_YELLOW_GREEN(args...) L_UNINDENTED(LOG_DEBUG, YELLOW_GREEN, args)
#define L_YELLOW_GREEN(args...) L(LOG_DEBUG, YELLOW_GREEN, args)
#define L_STACKED_YELLOW_GREEN(args...) L_STACKED(LOG_DEBUG, YELLOW_GREEN, args)

#pragma GCC diagnostic pop

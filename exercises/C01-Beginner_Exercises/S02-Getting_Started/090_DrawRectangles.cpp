// copyright (c) 2011 Robert Holder, Janice Dugger.
// See LICENSE.txt included with this software distribution for conditions of use.
// FeetWetCoding/exercises/C01-BeginnerExercises/S02-GettingStarted/060_ChangeFont.cpp

// Open (double-click) the README.html file to access the documentation.

#include <exercises/C01_S02.h>

void DrawRectangles::runExercise()
{
    // USAGE: DrawRectangle(x, y, width, height, color, thickness, solid);
    // (solid is an optional parameter, you can use it or leave it out.)
    DrawRectangle(50, 50, 300, 300, BLACK, 1);
    DrawRectangle(150, 150, 100, 100, RED, 5);
    DrawRectangle(175, 175, 50, 50, BLUE, 10, true);
}

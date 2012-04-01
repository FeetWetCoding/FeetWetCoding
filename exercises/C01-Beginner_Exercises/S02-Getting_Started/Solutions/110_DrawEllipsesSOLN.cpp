// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S02.h>

// ==========================================
// =       THIS IS THE SOLUTION CODE        =
// =    THIS IS *NOT* THE EXERCISE CODE     =
// = (If you meant to look at the exercise  =
// = it's in the directory above this one.) =
// ==========================================

void DrawEllipsesSoln::runExercise()
{
    // Things drawn later get drawn on top of things drawn earlier!

    // USAGE: fwcDrawEllipse(x, y, width, height, color, linewidth, solid);
    // (solid is an optional parameter, you can use it or leave it out.)

    fwcDrawEllipse(200, 100, 300, 50, BLUE, 1, true);
    fwcDrawEllipse(200, 200, 300, 30, RED, 5);
    fwcDrawEllipse(200, 300, 300, 10, BLACK, 1);
}

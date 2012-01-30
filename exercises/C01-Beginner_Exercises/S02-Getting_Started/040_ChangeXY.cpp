// copyright (c) 2011 Robert Holder, Janice Dugger.  All rights reserved.
// See LICENSE.txt included with this software distribution for conditions of use.
// FeetWetCoding/exercises/C01-BeginnerExercises/S02-GettingStarted/040_ChangeXY.cpp

// Open (double-click) the README.html file to access the documentation.

#include <setup.h>
extern bool Gsoln;

int ChangeXY::runExercise()
{
    Gsoln = false;

    // USAGE: DrawText("Text.", x, y, color, fontsize);
    DrawText("250,500", 250, 500, BLUE, 15);


    // This is FeetWetCoding internal stuff you can ignore for now:
    DrawReferenceBox(LEFTRIGHT);    // draw the graphical reference frame
    ChangeXYSoln *solution = new ChangeXYSoln();
    solution->runExercise();        // run Soln code to show what solution looks like

    return 0;
}

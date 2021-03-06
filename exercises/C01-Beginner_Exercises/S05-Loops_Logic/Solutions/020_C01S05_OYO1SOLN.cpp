// copyright (c) 2011 Robert Holder, Janice Dugger.
// See HELP.html included in this distribution.

#include <exercises/C01_S05.h>

// ==========================================
// =       THIS IS THE SOLUTION CODE        =
// =    THIS IS *NOT* THE EXERCISE CODE     =
// = (If you meant to look at the exercise  =
// = it's in the directory above this one.) =
// ==========================================

void C01S05_OYO1Soln::runExercise()
{
    int x=50;

    while ( x < 400 )
    {
        fwcCircle(x, 200, 10, BLUE, 1, true);
        x += 50;
    }
    seeout << "The first circle is located at 50, 200 with radius 20.\n";
    seeout << "The center of the circles are spaced 50px apart.\n";
}

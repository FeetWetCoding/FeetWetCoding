// copyright (c) 2011 Robert Holder, Janice Dugger.
// See HELP.html included in this distribution.

#include <exercises/C01_S05.h>

// ==========================================
// =       THIS IS THE SOLUTION CODE        =
// =    THIS IS *NOT* THE EXERCISE CODE     =
// = (If you meant to look at the exercise  =
// = it's in the directory above this one.) =
// ==========================================

void WhileLoop3Soln::runExercise()
{
    int x=0, y=0;
    int verticalstep=10, horizontalstep=15;

    while ( x < 400 )
    {
        x += horizontalstep;
        fwcLine(200, 200, x, 400, BLUE, 1);
        fwcLine(200, 200, x, 0, RED, 1);
    }

    while ( y < 400 )
    {
        y += verticalstep;
        fwcLine(200, 200, 400, y, GREEN, 1);
        fwcLine(200, 200, 0, y, YELLOW, 1);
    }
}

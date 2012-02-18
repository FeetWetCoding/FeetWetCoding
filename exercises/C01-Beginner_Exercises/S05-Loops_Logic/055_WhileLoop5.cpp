// FeetWetCoding/exercises/C01-BeginnerExercises/S05-Loops_Logic/055_WhileLoop5.cpp
// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S05.h>

void WhileLoop5::runExercise()
{
    int x=0, y=0;                   // = is pronounced GETS, == is pronounced EQUALS
    int horizontalstep=70, verticalstep=70;

    while ( x < 400 )
    {
        while ( y < 400 )
        {
            DrawRectangle(x, y, 25, 25, RED, 1, true);
            y += verticalstep;
        }
        y=0;
        x += horizontalstep;
    }
}

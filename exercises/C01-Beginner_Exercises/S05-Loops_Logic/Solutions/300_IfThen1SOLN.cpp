// copyright (c) 2011 Robert Holder, Janice Dugger.  
// See LICENSE.txt included with this software distribution for conditions of use.

// FeetWetCoding/exercises/Chapter01/EXERCISENAME.cpp

// Chapter 01 Exercise 02: INTroduction to INTeger variables.

// OPEN FeetWetCoding/helpinfo/html/EXERCISENAME.html
// for more information about this exercise.

#include <exercises/C01_S05.h>

void IfThen1Soln::runExercise()
{
    int x=0, y=0;
    int horizontalstep=70, verticalstep=70;

    while ( x < 400 )
    {
        while ( y < 400 )
        {
            if ( x > y )
            {
                DrawRectangle(x, y, 25, 25, RED, 1, true);
            }
            if ( x < y )
            {
                DrawRectangle(x, y, 25, 25, BLUE, 1, true);
            }
            if ( x == y )  // = is pronounced GETS, == is pronounced EQUALS  :-)
            {
                DrawRectangle(x, y, 25, 25, BLACK, 1, true);

            }
            y += verticalstep;
        }
        y=0;
        x += horizontalstep;
    }
}

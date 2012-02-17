// FeetWetCoding/exercises/C01-BeginnerExercises/S05-Loops_Logic/330_Primes1.cpp
// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S05.h>
#include <math.h>

void Primes1::runExercise()
{
    int n = 0, c = 0, x = 0, y = 0;
    int horizontalstep = 30, verticalstep = 40;
    bool prime = true;
    Color color = DARKBLUE;

    for ( n = 1; n < 101; n++ )
    {
        DrawInt(n, x, y, color);

        prime = true;

        x += horizontalstep;
        if ( x > 400 - horizontalstep )
        {
            x = 0;
            y += verticalstep;
        }
    }
    seeout << "Why do math when you can make the computer do it for you! :-D :-D\n";
}
// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S06.h>
#include <math.h>

void Arrays1::runExercise()
{
    int n = 0;

    int IntOccurance[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    //Color color = DARKBLUE;

    for ( n = 1; n < 10000000; n++ )
    {
        IntOccurance[random(10)]++;
    }

    for ( n = 0; n < 10; n++ )
    {
        seeout << n << ": " << IntOccurance[n] << "\n";
    }

}

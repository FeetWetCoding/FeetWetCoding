// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S06.h>

void ScaleItem1::runExercise()
{
    int lightbulbx(0), lightbulby(0), maxradius(100), linewidth(10), fontsize(15);
    int circle1x(200), circle1y(200), circle1radius(5);

    std::string key;

    seeout << "Hover mouse over the drawing area above and press + or -";
    seeout << " to change the circle size.  Press q to quit.\n";

    int circle1 = fwcDrawCircle(circle1x,circle1y,circle1radius,DARKBLUE,linewidth,true);

    while ( key != "q" && key != "Q" )
    {
        key = waitForKeyPress();        // = is pronounced "GETS"

        if ( key == "+" )               // == is pronounced "EQUALS" :-)
        {

            if ( circle1radius < maxradius )
            {
                fwcScaleItem(circle1, 1.1);
            }
        }

        if ( key == "-" )
        {

            if ( circle1radius > 5 )
            {
                fwcScaleItem(circle1, 0.9);
            }
        }
    }

    fwcClearItems();
    fwcDrawText("DONE!", 60, 150, DARKBLUE, 60);
}

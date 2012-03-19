// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S06.h>
#include <math.h>

void SingleKeyInput1Soln::runExercise()
{
    int x = 10, y = 20;
    int fontSize = 60;
    std::string key;
    Color color = DARKBLUE;

    seeout.setColor(DARKRED);
    seeout.setFontSize(15);
    seeout << "Hover mouse over the solution drawing area and press keys, or q to quit.\n";

    while ( key != "q" && key != "Q" )
    {
        key = waitForKeyPress();

        fwcDrawText(key, x, y, color, fontSize);

        x += fontSize;
        if (x > 400-trunc(fontSize*1.5))
        {
            x = 10;
            y += fontSize * 2;
            if (y > 400-(fontSize * 2))
            {
                x = 10;
                y = 20;
                fwcClearItems();
            }
        }
    }
    fwcClearItems();
    fwcDrawText("DONE!", 60, 150, color, 60);
}

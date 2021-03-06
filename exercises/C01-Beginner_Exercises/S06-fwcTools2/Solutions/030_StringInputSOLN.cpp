// copyright (c) 2011 Robert Holder, Janice Dugger.
// See HELP.html included in this distribution.

#include <exercises/C01_S06.h>
#include <math.h>

// ==========================================
// =       THIS IS THE SOLUTION CODE        =
// =    THIS IS *NOT* THE EXERCISE CODE     =
// = (If you meant to look at the exercise  =
// = it's in the directory above this one.) =
// ==========================================

void StringInputSoln::runExercise()
{
    int x;
    int fontSize = 15;
    std::string name, greeting;
    Color color = DARKBLUE;

    int text1 = fwcText("Mouseover this window, then", 30, 100, color);
    int text2 = fwcText("type your name and hit ENTER:", 30, 130, color);
    name = getKeyboardString();

    //Clear the old text...
    fwcEraseItem(text1);
    fwcEraseItem(text2);

    //And add the new...
    greeting.assign("Hi ");
    greeting.append(name);
    greeting.append("!!! :-)");

    x = 200-(greeting.size()*fontSize)/4;

    fwcText(greeting, x, 180, color, fontSize);

    seeout << "Notice that in this solution, the greeting is more or less";
    seeout << " centered in the drawing area, regardless of how many";
    seeout << " characters are in your name.  Re-start this exercise and";
    seeout << " try longer and shorter names to see what I mean.\n";
}

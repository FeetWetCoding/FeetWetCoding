// copyright (c) 2011 Robert Holder, Janice Dugger.
// See HELP.html included in this distribution.

#include <exercises/C01_S06.h>
#include <math.h>

void StringInput::runExercise()
{
    int x = 10, y = 20, count;
    int fontSize = 20;
    std::string name, greeting;
    Color color = DARKBLUE;

    int text1 = fwcText("Mouseover this window, then", 30, 100, color);
    int text2 = fwcText("type your name and hit ENTER:", 30, 130, color);
    name = getKeyboardString();

    //Clear the old text...
    fwcEraseItem(text1);
    fwcEraseItem(text2);

    //And add the new...
    for ( count=0; count < 50; count++ )
    {
        fontSize = random(10)+3;
        greeting.assign("Hi ");
        greeting.append(name);
        greeting.append("!!! :-)");

        x = random(400-greeting.size()*fontSize);
        y = random(400-fontSize*2);
        fwcText(greeting, x, y, color, fontSize);
        msleep(100);
    }
}

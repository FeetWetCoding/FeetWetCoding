// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S02.h>

void DrawingImagesSoln::runExercise()
{
    // USAGE: fwcDrawImage("filename.png", x, y);
    //        filename.png must be an image file in your FeetWetCoding
    //        project folder's "img" sub-directory.

    fwcDrawImage("ken-thompson-l-and-dennis-ritchie-r100x65.png", 10, 10);
    fwcDrawImage("BrianKernighan50x58.png", 130, 10);
    fwcDrawImage("BjarneStroustrup50x55.png", 200, 10);
    fwcDrawImage("Qtlogo59x71.png", 300, 10);
    fwcDrawImage("DuckFeet100x45.bmp", 150, 340);
    fwcDrawImage("clock100x100.gif", 150, 150);
    fwcDrawImage("spaceship50x59.jpg", 175, 80);
    fwcDrawImage("spaceship50x59.jpg", 70, 160);
    fwcDrawImage("spaceship50x59.jpg", 280, 160);
    fwcDrawImage("spaceship50x59.jpg", 175, 260);
}

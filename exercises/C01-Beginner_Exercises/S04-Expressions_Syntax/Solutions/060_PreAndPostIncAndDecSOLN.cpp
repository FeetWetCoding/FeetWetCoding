// FeetWetCoding/exercises/C01-BeginnerExercises/S04-Expressions_Syntax/060_PreAndPostIncAndDec.cpp
// copyright (c) 2011 Robert Holder, Janice Dugger.
// See README.html included in this distribution.

#include <exercises/C01_S04.h>

void PreAndPostIncAndDecSoln::runExercise()     // copy the exercise name & paste it into main.cpp
{
    int sum = 0;

    DrawText("...the seeout output below.", 50, 150, BLUE, 20);


    seeout << "1st sum: " << sum++ << "\n";
    seeout << "2nd sum: " << ++sum << "\n";
    seeout << "3rd sum: " << sum++ << "\n";
    seeout << "4th sum: " << ++sum << "\n";
    seeout << "5th sum: " << sum-- << "\n";
    seeout << "6th sum: " << --sum << "\n";
    seeout << "7th sum: " << --sum << "\n";
}



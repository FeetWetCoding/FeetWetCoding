// copyright (c) 2011 eotsucodefoundry.com.
// See LICENSE.txt included with this software distribution for conditions of use.

// FeetWetCoding/exercises/Chapter01/SeeOut.cpp

// Chapter 01 Exercise 00: Using SeeOut to print output.

// OPEN FeetWetCoding/helpinfo/html/ch00ex00TITLE.html
// for more information about this exercise.

#include <setup.h>
#include <exercises/C01_S03.h>
extern bool Gsoln;

int Chars::runExercise()     // copy the exercise name & paste it into main.cpp
{
    Gsoln = false;

    // We will get into strings and arrays in Chapter 01, Section 06.
    // You will probably almost never actually use single character variables in
    // this way, but this exercise is here for the sake of completeness, and for
    // your reference.  There is nothing for you to solve in this exercise.

    char lettera = 'A';     // individual letters get ' quotes, not " quotes
    char letterb = 'B';     // because " denotes a string.  Don't worry, we'll get to it.  :-)

    DrawText("seeout output below:", 50, 170, BLUE, 20);

    seeout << "Grades for Mr. Picklefeather's English Class:\n";
    seeout << "Jane: " << lettera << "\n";
    seeout << "Jill: " << letterb << "\n";
    seeout << "(Nothing to solve in this exercise.)\n";

    // This is FeetWetCoding internal stuff you can ignore for now:
    DrawReferenceBox(LEFTRIGHT);    // draw the graphical reference frame

    return 0;
}


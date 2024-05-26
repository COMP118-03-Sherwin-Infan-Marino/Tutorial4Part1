/** \file Lab-2.cpp
*   \brief Draws shapes according to the user or a bunch of random shapes
*   \details Draws a hizontal line,vertical line,square and rectangle shapes according to the user or randomized no of them generated using the random function. We used a combination of for loops, switch case and if statements to acheive this.
*   \author Sherwin Marino Yves Fredrick Raj
*   \version 0.1
*   \date 2024-2024
*   \copyright University of Nicosia.
*/

#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cassert>
#include "Shapes.h"
using namespace std;

int main()
{
    srand(time(NULL));
    int choice, LengthValue, HeightValue, SizeValue;
    char CharacterValue;

    cout << "1) Draw a horizontal line 2) Draw a vertical line 3) Draw a square 4) Draw a rectangle 5) Quit 6) Random Shapes 7) To generate 10 random shapes using arrays \n";
    cout << "Enter your Option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:

        cout << "Enter lenght and the character \n";
        cin >> LengthValue >> CharacterValue;
        drawHorizontalLine(LengthValue, CharacterValue);
        break;

    case 2:

        cout << "Enter height and the character \n";
        cin >> HeightValue >> CharacterValue;
        drawVerticalLine(HeightValue, CharacterValue);
        break;

    case 3:

        cout << "Enter size and the character \n";
        cin >> SizeValue >> CharacterValue;
        drawSquare(SizeValue, CharacterValue);
        break;

    case 4:

        cout << "Enter height, length and the character \n";
        cin >> HeightValue >> LengthValue >> CharacterValue;
        drawRectangle(HeightValue, LengthValue, CharacterValue);
        break;

    case 5:
        cout << "Program Exited\n";
        break;


    case 6:

        drawShapes(1 + rand() % 10);
        break;

    case 7:

        initializeArrays();
        break;

    default:
        cout << "Wrong Input\n";
        break;
    }
    return 0;
}
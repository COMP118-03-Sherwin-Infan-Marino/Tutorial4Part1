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

void drawHorizontalLine(const int length, const char ch);
void drawVerticalLine(const int height, const char ch);
void drawSquare(const int size, const char ch);
void drawRectangle(const int height, const int length, const char ch);
void drawShapes(const int numShapes);
void initializeArrays();
void drawArrays(const int shapeTy[], const int shapeLen[], const int height[], const char shapeCh[], const int arrSize);

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

/**
* This function draws a horizontal line using for loops.
* @param length The integer variable that decides the length of the line.
* @param ch The character variable that decides the character that makes the line.
*/

void drawHorizontalLine(const int length, const char ch)
{
    assert(length > 0); // Pre condition

    for (int i = 0; i < length; i++)
    {
        cout << ch;
    }
    cout << "   \n";
}

/**
* This function draws a vertical line using for loops.
* @param height The integer variable that decides the height of the line.
* @param ch The character variable that decides the character that makes the line.
*/

void drawVerticalLine(const int height, const char ch)
{
    assert(height > 0); // Pre condition

    for (int i = 0; i < height; i++)
    {
        cout << ch << '\n';
    }
    cout << "   \n";
}

/**
* This function draws a square using the 1st for loop for the rows, if statements so that the square is hollow and the second loop for the columns.
* @param size The integer variable that decides the length and breadth of the square.
* @param ch The character variable that decides the character that makes the square.
*/

void drawSquare(const int size, const char ch)
{
    assert(size >= 2); // Pre condition

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != 0 && i != size - 1)
            {
                if (j != 0 && j != size - 1)
                {
                    cout << " ";
                }
                else
                    cout << ch;
            }
            else
                cout << ch;
        }
        cout << "\n";
    }
}

/**
* This function draws a rectangle using the 1st for loop for the rows, if statements so that the rectangle is hollow and the second loop for the columns.
* @param height The integer variable that decides the height of the rectangle.
* @param length The integer variable that decides the breadth of the rectangle.
* @param ch The character variable that decides the character that makes the rectangle.
*/

void drawRectangle(const int height, const int length, const char ch)
{
    assert(height >= 2); // Pre condition
    assert(length >= 2); // Pre condition

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i != 0 && i != height - 1)
            {
                if (j != 0 && j != length - 1)
                {
                    cout << " ";
                }
                else
                    cout << ch;
            }
            else
                cout << ch;
        }
        cout << "\n";
    }
}

/**
* This function takes num of shapes generated by the random function and randomly creates that number of shapes with random length, height and characters.
* @param numShapes The integer variable that decides the number of shapes to randomly generate.
*/

void drawShapes(const int numShapes)
{
    assert(numShapes > 0); // Pre condition

    for (int i = 0; i < numShapes; i++)
    {
        int shapeType = 1 + rand() % 4;
        int shapelength = 5 + rand() % 16;
        int shapeheight = 5 + rand() % 16;
        int shapeCharacter = 33 + rand() % 94;

        if (shapeType == 1)
        {
            drawHorizontalLine(shapelength, char(shapeCharacter));
        }

        if (shapeType == 2)
        {
            drawVerticalLine(shapeheight, char(shapeCharacter));
        }

        if (shapeType == 3)
        {
            drawSquare(shapelength, char(shapeCharacter));
        }

        if (shapeType == 4)
        {
            drawRectangle(shapeheight, shapelength, char(shapeCharacter));
        }

        cout << "   \n";
    }
}

/**
* This function initializes the required arrays with random values so that it can be passed to void drawArrays function.
*/

void initializeArrays()
{
    int typ[10], length[10], heigh[10];
    char ch[10];
    for (int i = 0; i < 10; i++)
    {
        typ[i] = 1 + rand() % 4;
        length[i] = 2 + rand() % 19;
        heigh[i] = 2 + rand() % 19;
        ch[i] = char(33 + rand() % 94);
    }

    drawArrays(typ, length, heigh, ch, 10);
}

/**
* This function generates the required shapes using the values generated by the initializeArrays function using a for loop.
* @param shapeTy[] The integer array that decides the type of shapes to randomly generate.
* @param shapeLen[] The integer array that decides the breadth of the shapes.
* @param height[] The integer array that decides the height of the shapes.
* @param shapeCh[] The character array that decides the character that makes the shapes.
* @param arrSize The integer that decides the no of shapes.
*/

void drawArrays(const int shapeTy[], const int shapeLen[], const int height[], const char shapeCh[], const int arrSize)
{
    int len, hei, st;
    char c;

    for (int i = 0; i < arrSize; i++)
    {
        len = shapeLen[i];
        hei = height[i];
        st = shapeTy[i];
        c = shapeCh[i];

        assert(len > 0); // Pre condition
        assert(hei > 0); // Pre condition
        assert(st > 0); // Pre condition
        assert(c > 0); // Pre condition

        if (st == 1)
        {
            drawHorizontalLine(len, c);
        }

        if (st == 2)
        {
            drawVerticalLine(hei, c);
        }

        if (st == 3)
        {
            drawSquare(len, c);
        }

        if (st == 4)
        {
            drawRectangle(hei, len, c);
        }

        cout << "   \n";
    }
}
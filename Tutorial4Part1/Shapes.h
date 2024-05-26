/** \file Shapes.h
*   \brief Library to draw various shapes.
*   \details The program illustrates a multifile that contains the function prototype to draw various shapes.
*   \author Sherwin Marino Yves Fredrick Raj
*   \version 0.1
*   \date 2024-2024
*   \copyright University of Nicosia.
*/

#ifndef SHAPES_H
#define SHAPES_H

void drawHorizontalLine(const int length, const char ch);
void drawVerticalLine(const int height, const char ch);
void drawSquare(const int size, const char ch);
void drawRectangle(const int height, const int length, const char ch);
void drawShapes(const int numShapes);
void initializeArrays();
void drawArrays(const int shapeTy[], const int shapeLen[], const int height[], const char shapeCh[], const int arrSize);

#endif 
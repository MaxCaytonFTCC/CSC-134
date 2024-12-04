#include <iostream>
#include "box.h"
#include "rectangle.h"
using namespace std;

double collectValidInput();

double collectValidInput() {
    double input = 0;
    cin >> input;
    if (input <= 0) {
        cout << "Invalid input, try again" << endl;
        input = collectValidInput();
    }
    return input;    
}

int main() {    

    cout << "=====RECTANGLE=====" << endl;
    Rectangle rect;
    double rectWidth;
    double rectLength;

    cout << "This program will calculate the area of a \n";
    cout << "rectangle. What is the width? ";
    rectWidth = collectValidInput();
    cout << "What is the length? ";
    rectLength = collectValidInput();

    rect.setWidth(rectWidth);
    rect.setLength(rectLength);

    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "--------------------" << endl;

    cout << "========BOX=======" << endl;

    Box box;
    double boxWidth;
    double boxLength;
    double boxHeight;

    cout << "This program will calculate the area of a \n";
    cout << "box. What is the width? ";
    boxWidth = collectValidInput();
    cout << "What is the length? ";
    boxLength = collectValidInput();
    cout << "And what is the height?: ";
    boxHeight = collectValidInput();

    box.setWidth(boxWidth);
    box.setLength(boxLength);
    box.setHeight(boxHeight);

    cout << "Here is the box's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Height: " << box.getHeight() << endl;
    cout << "Volume: " << box.getVolume() << endl;    

    cout << "--------------------" << endl;


    return 0;
}

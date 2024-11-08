// CSC 134
// M5HW1_Q4 - Gold
// Max Cayton
// 11/8/2024
#include <iostream>
#include <iomanip>
using namespace std;

void geometryCalculator();
void calculateCircleArea();
void calculateRectangleArea();
void calculateTriangleArea();

int main() {
    geometryCalculator();
}

void geometryCalculator() {

    int choice;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    
    cin >> choice;

    switch (choice) {
        case 1:
            calculateCircleArea();
        break;
        case 2:
            calculateRectangleArea();
        break;
        case 3:
            calculateTriangleArea();
        break;
        case 4:
            return;
        break;
    }

}

void calculateCircleArea() {

    double area = 0.0;
    double r;
    cout << "Enter the circle's radius: ";
    cin >> r;
    area = r * 3.14159;

    cout << "The area is " << area << endl;

}


void calculateRectangleArea() {

    double area = 0.0;
    double length;
    double width;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    cout << "Enter the rectangle's width: ";
    cin >> width;

    area = length * width;

    cout << "The area is " << area << endl;

}


void calculateTriangleArea() {

    double area = 0.0;
    double base;
    double height;
    cout << "Enter the triangle's base: ";
    cin >> base;
    cout << "Enter the triangle's height: ";
    cin >> height;

    area = base * height * 0.5;

    cout << "The area is " << area << endl;

}

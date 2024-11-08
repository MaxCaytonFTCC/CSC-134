// CSC 134
// M5HW1_Q2 - Gold
// Max Cayton
// 11/8/2024
#include <iostream>
#include <iomanip>
using namespace std;

double getBlockVolume(double length, double width, double height);
double getDimension(string promptString);

int main() {
    double volume = getBlockVolume(getDimension("length"),getDimension("width"),getDimension("height"));
    cout << "Volume of Block: " << volume << endl;
}

double getBlockVolume(double length, double width, double height) {
    return length * width * height;
}

double getDimension(string promptString) {
    double dimension = 0.0;
    while (dimension <= 0.0) {
        cout << "Enter Block "<< promptString << ": ";
        cin >> dimension;
        if (dimension <= 0.0) cout << "Invalid input, please try again." << endl;
    }
    return dimension;
}
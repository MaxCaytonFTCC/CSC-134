// CSC 134
// M3T2
// Max Cayton
// 9/18/2024

#include <iostream>


using namespace std;

int main() {

    int width1, length1, width2, length2;
    int area1, area2;

    // Collect Input
    cout << "Enter the width & height of the first rectangle, " << endl;
    cout << "separated by a space or newline" << endl;
    cin >> width1 >> length1;

    cout << "Enter the width & height of the second rectangle, " << endl;
    cout << "separated by a space or newline" << endl;
    cin >> width2 >> length2;

    // Calculate
    area1 = width1 * length1;
    area2 = width2 * length2;

    // Display Results
    cout << "Rectangle 1 has an area of " << area1 << endl;
    cout << "Rectangle 2 has an area of " << area2 << endl;

    // Determine which is bigger
    if (area1 > area2) {
        cout << "Rectangle 1 is bigger" << endl;
    }

    if (area2 > area1) {
        cout << "Rectangle 2 is bigger" << endl;
    }

    if (area1 == area2) {
        cout << "Both Rectangles have the same area" << endl;
    }

}
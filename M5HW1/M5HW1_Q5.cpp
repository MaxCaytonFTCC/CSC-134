// CSC 134
// M5HW1_Q4 - Gold
// Max Cayton
// 11/8/2024
#include <iostream>
#include <iomanip>
using namespace std;

void calculateDistanceTraveled();

int main() {
    calculateDistanceTraveled();
}

void calculateDistanceTraveled() {

    double dist;
    double speed;
    double hours;
    cout << "What is the speed of the vehicle in mph?: ";
    cin >> speed;

    cout << "How many hours has it traveled?: ";
    cin >> hours;

    cout << "Hour Distance Traveled" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 0; i < hours; i++) {
        int currentHour = (i + 1);
        cout << currentHour << "        " << currentHour * speed << endl;
    }

}
// CSC 134 
// M4HW1 - Gold
// Max Cayton
// 10/15/24

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    const int finalMultiplier = 12;

    int userNum;
    
    // Collect Input
    cout << "Enter a number from 1 to 12: ";
    cin >> userNum;

    // Input Validation
    while (userNum < 1 || userNum > 12) {
        cout << "Invalid number, please enter a number from 1 to 12: ";
        cin >> userNum;
    }

    // Display Times Tables
    int multiplier = 1;
    while (multiplier <= finalMultiplier) {
        int product = userNum * multiplier;
        cout << userNum << " times " << multiplier << " is " << product << endl;
        multiplier++;
    }

    return 0;
}
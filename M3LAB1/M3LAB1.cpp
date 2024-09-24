// CSC 134
// M3LAB1
// Max Cayton
// 9/24/2024

#include <iostream>
using namespace std;

string chooseCone();
string chooseCup();

int main() {

    int choice; 

    // Prompt user to make choice
    cout << "Thank you for your purchase of ice cream!" << endl;
    cout << "Would you like a waffle cone or a paper cup?" << endl;
    cout << "Enter 1 or 2: "; 

    // Collect choice
    cin >> choice;

    string choiceString;

    if (1 == choice) {
        choiceString = chooseCone();
    }
    else if (2 == choice) {
        choiceString = chooseCup();
    }
    else {
        cout << "Please select a valid option." << endl;
        return 0;
    }

    cout << "You have chosen a " << choiceString << ", have a wonderful day!" << endl;

    return 0;
}

string chooseCone() {
    return "waffle cone";
}

string chooseCup() {
    return "paper cup";
}
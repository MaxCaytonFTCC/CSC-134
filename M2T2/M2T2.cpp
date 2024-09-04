// CSC 134
// M2T2
// Max Cayton
// 9/4/2024


// Derived from M1LAB
#include <iostream>
using namespace std;

int main() {
    
    // Variable Declaration
    string name;
    int apples;
    double pricePerApple;

    // Collect User Input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the amount of apples to be purchased: ";
    cin >> apples;

    cout << "Enter the price per apple: ";
    cin >> pricePerApple;


    // Calculate the total price of the apples
    double totalPrice = (double) apples * pricePerApple;

    // Print all the information about the orchard
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;

    // Print Total Price
    cout << "If you want them all, that will be $" << totalPrice << endl;

}
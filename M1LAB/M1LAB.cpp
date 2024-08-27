// CSC 134
// M1LAB
// Max Cayton
// 8/27/2024

#include <iostream>
using namespace std;

int main() {
    
    string name = "Max Cayton";
    int apples = 100;

    double pricePerApple = 0.25;

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
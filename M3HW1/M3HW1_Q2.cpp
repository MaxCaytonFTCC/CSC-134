// CSC 134 
// M3HW1 - Q2 - Gold
// Max Cayton
// 9/26/24

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare Variables
    double mealPrice;
    double taxRate = 0.08; // 8%
    double taxAmount; // Dollar value of the tax
    double total; // Meal + Tax

    double tipAmout = 0.0;
    double tipPercent = 0.15; // 15%

    int dineIn;

    // Input & Prompts
    cout << "Please enter the price of your meal: ";
    cin >> mealPrice;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> dineIn;


    if (dineIn == 1) { // Is dine in
        tipAmout = mealPrice * tipPercent;
    }
    
    // Calculation
    taxAmount = mealPrice * taxRate;
    total = mealPrice + taxAmount + tipAmout;

    // Output
    cout << "Your meal total is: $" << setprecision(3) << mealPrice << endl;
    cout << "The tax is: $" << setprecision(2) << taxAmount << endl;
    cout << "Your tip is : $" << setprecision(3) << tipAmout << endl;
    cout << "Your total is: $" << setprecision(3) << total << endl;

}
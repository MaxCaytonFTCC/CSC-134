// CSC 134
// M2T1
// Max Cayton
// 9/4/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare Variables
    double mealPrice = 5.99;
    double taxRate = 0.08; // 8%
    double taxAmount; // Dollar value of the tax
    double total; // Meal + Tax

    // Calculation
    taxAmount = mealPrice * taxRate;
    total = mealPrice + taxAmount;

    // Output
    cout << "Your meal total is: $" << setprecision(3) << mealPrice << endl;
    cout << "The tax is: $" << setprecision(2) << taxAmount << endl;
    cout << "Your total is: $" << setprecision(3) << total << endl;

}
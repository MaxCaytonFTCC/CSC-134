// CSC 134
// M2HW1_Q2
// Max Cayton
// 9/17/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double COST_PER_CUBIC_FOOT = 0.3; // Updated
    const double CHARGE_PER_CUBIC_FOOT = 0.5; // Already below 0.52

    // Variables
    double length,
            width,
            height,
            volume,
            cost,
            charge,
            profit;
    
    // Set Output precision format
    cout << setprecision(2) << fixed << showpoint; // Already printing to 2 decimal places

    // Prompt User Input
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;    
    cout << "Height: ";
    cin >> height;

    // Calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display Calculation Data
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << charge << endl;
    cout << "ProfitL $" << profit << endl;
    return 0;

}
// CSC 134
// M2HW1_Q1
// Max Cayton
// 9/10/2024

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int ACCOUNT_NUMBER = 3601;

    string userName;
    double startingAccountBalance;
    double depositAmount;
    double withdrawalAmount;

    // Prompt Input
    cout << "Enter your name: ";
    cin >> userName;
    cout << "Enter your starting account balance: $";
    cin >> startingAccountBalance;
    cout << "Enter your deposit amount: $";
    cin >> depositAmount;
    cout << "Enter your withdrawal ammount: $";
    cin >> withdrawalAmount;
    
    // Calculation
    double finalBalance = (startingAccountBalance + depositAmount) - withdrawalAmount;

    // Output
    cout << "Username: " << userName << endl;
    cout << "Account#: " << ACCOUNT_NUMBER << endl;
    
    cout << fixed << setprecision(2);
    cout << "Final Balance: $" << finalBalance << endl;

}
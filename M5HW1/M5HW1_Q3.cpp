// CSC 134
// M5HW1_Q3 - Gold
// Max Cayton
// 11/8/2024
#include <iostream>
#include <iomanip>
using namespace std;

string getRomanNumeral(int digit);

int main() {

    int digit = -1;
    while (digit < 0 || digit > 10) {
        cout << "Enter a number (1 - 10): ";
        cin >> digit;
    }

    string romanNumeral = getRomanNumeral(digit);
    cout << "The Roman numeral version of " << digit << " is " << romanNumeral << endl;

}

string getRomanNumeral(int digit) {

    switch (digit) {
        case 1:
            return "I";
        case 2:
            return "II";
        case 3:
            return "III";
        case 4:
            return "IV";
        case 5:
            return "V";
        case 6:
            return "VI";
        case 7:
            return "VII";
        case 8:
            return "VIII";
        case 9:
            return "IX";
        case 10:
            return "X";
    }

    return "None";
}
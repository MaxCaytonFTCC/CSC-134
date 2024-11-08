// CSC 134
// M5HW1_Q1 - Gold
// Max Cayton
// 11/8/2024
#include <iostream>
#include <iomanip>
using namespace std;

void calculateAvgRainfall();
string getMonthName();
double getRainfall(string monthName);

int main() {
    calculateAvgRainfall();
}

void calculateAvgRainfall() {

    string month1,
           month2,
           month3;
    double avg = 0.0,
           rainfall1 = 0.0,
           rainfall2 = 0.0,
           rainfall3 = 0.0;

    // Get Months & Rainfalls
    month1 = getMonthName();
    rainfall1 = getRainfall(month1);
    month2 = getMonthName();
    rainfall2 = getRainfall(month2);
    month3 = getMonthName();
    rainfall3 = getRainfall(month3);

    avg = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    cout << setprecision(2) << fixed << showpoint;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << " inches" << endl;

}

string getMonthName() {
    string monthName;
    cout << "Enter month: ";
    cin >> monthName;
    return monthName;    
}

double getRainfall(string monthName) {
    double rainfall;
    cout << "Enter rainfall for " << monthName << ": ";
    cin >> rainfall;
    return rainfall;
}
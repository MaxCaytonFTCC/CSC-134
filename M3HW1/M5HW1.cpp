// CSC 134
// M5HW1 - Gold
// Max Cayton
// 11/8/2024
#include <iostream>
#include <iomanip>
using namespace std;

// Method Declarations

// Q1
void calculateAvgRainfall();
string getMonthName();
double getRainfall(string monthName);

// Q2
double getBlockVolume(double length, double width, double height);
double getDimension(string promptString);
void calculateBlockVolume();

// Q3
string getRomanNumeral(int digit);
void convertRomanNumeral();

// Q4
void geometryCalculator();
void calculateCircleArea();
void calculateRectangleArea();
void calculateTriangleArea();

// Q5
void calculateDistanceTraveled();

int main() {

    int choice = 0;

    while (choice != 6) {

        cout << "Select a Question" << endl;
        cout << "----------------------" << endl;
        cout << "1. Q1 - Month Rainfall" << endl;
        cout << "2. Q2 - Block Volume" << endl;
        cout << "3. Q3 - Roman Numerals" << endl;
        cout << "4. Q4 - Geometry Calculator" << endl;
        cout << "5. Q5 - Calculate Distance Traveled" << endl;
        cout << "6. Exit Program" << endl;

        cout << "Enter Choice: (1-6): ";
        cin >> choice;

        if (choice > 6 || choice < 1) {
            cout << "Invalid input, please try again" << endl;
            continue;
        }

        switch (choice) {
            case 1: calculateAvgRainfall(); break;
            case 2: calculateBlockVolume(); break;
            case 3: convertRomanNumeral(); break;
            case 4: geometryCalculator(); break;
            case 5: calculateDistanceTraveled(); break;
            case 6: cout << "Program Exited" << endl; break;
        }
    }
}


#pragma region Q1

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

#pragma endregion

#pragma region Q2

    double getBlockVolume(double length, double width, double height) {
        return length * width * height;
    }

    double getDimension(string promptString) {
        double dimension = 0.0;
        while (dimension <= 0.0) {
            cout << "Enter Block "<< promptString << ": ";
            cin >> dimension;
            if (dimension <= 0.0) cout << "Invalid input, please try again." << endl;
        }
        return dimension;
    }

    void calculateBlockVolume() {
        double volume = getBlockVolume(getDimension("length"),getDimension("width"),getDimension("height"));
        cout << "Volume of Block: " << volume << endl;    
    }

#pragma endregion

#pragma region Q3

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

    void convertRomanNumeral() {
        string romanNumeral = "";
        int digit = -1;
        while (digit < 0 || digit > 10) {
            cout << "Enter a number (1 - 10): ";
            cin >> digit;
        }
        romanNumeral = getRomanNumeral(digit);
        cout << "The Roman numeral version of " << digit << " is " << romanNumeral << endl;
    }

#pragma endregion

#pragma region Q4

    void geometryCalculator() {

        int choice;
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        
        cin >> choice;

        switch (choice) {
            case 1:
                calculateCircleArea();
            break;
            case 2:
                calculateRectangleArea();
            break;
            case 3:
                calculateTriangleArea();
            break;
            case 4:
                return;
            break;
        }

    }

    void calculateCircleArea() {

        double area = 0.0;
        double r;
        cout << "Enter the circle's radius: ";
        cin >> r;
        area = r * 3.14159;

        cout << "The area is " << area << endl;

    }


    void calculateRectangleArea() {

        double area = 0.0;
        double length;
        double width;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;

        area = length * width;

        cout << "The area is " << area << endl;

    }


    void calculateTriangleArea() {

        double area = 0.0;
        double base;
        double height;
        cout << "Enter the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;

        area = base * height * 0.5;

        cout << "The area is " << area << endl;

    }

#pragma endregion

#pragma region Q5

    void calculateDistanceTraveled() {

        double dist;
        double speed;
        double hours;
        cout << "What is the speed of the vehicle in mph?: ";
        cin >> speed;

        cout << "How many hours has it traveled?: ";
        cin >> hours;

        cout << "Hour Distance Traveled" << endl;
        cout << "--------------------------------" << endl;

        for (int i = 0; i < hours; i++) {
            int currentHour = (i + 1);
            cout << currentHour << "        " << currentHour * speed << endl;
        }

    }

#pragma endregion
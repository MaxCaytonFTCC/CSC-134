// CSC 134 
// M3HW1 - Q4 - Gold
// Max Cayton
// 9/26/24

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

    srand(time(0)); // Random Seed

    int digit1 = rand() % 10;
    int digit2 = rand() % 10;

    int answer = digit1 + digit2;
    int guess = 0;

    cout << "What is " << digit1 << " + " << digit2 << "?" << endl;
    cin >> guess;

    if (guess == answer) cout << "You got it!" << endl;
    else cout << "Incorrect" << endl;

    return 0;
}
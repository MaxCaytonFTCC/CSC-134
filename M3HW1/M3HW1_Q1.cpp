// CSC 134 
// M3HW1 - Q1 - Gold
// Max Cayton
// 9/26/24

#include <iostream>
using namespace std;

int main() {

    string likeResponse;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no" << endl;
    
    cin >> likeResponse;

    if (likeResponse == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (likeResponse == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK" << endl;
    }

    return 0;
}
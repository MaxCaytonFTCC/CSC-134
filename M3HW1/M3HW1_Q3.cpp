// CSC 134 
// M3HW1 - Q3 - Gold
// Max Cayton
// 9/26/24

#include <iostream>
using namespace std;


void printIntro() {
    cout << "~*~*~*~*~*~*~*~*~*~*~" << endl;
    cout << "You awake in an endless void that has two closed doors in the distance" << endl;
}

void printTheEnd() {
    cout << "\nTHE END" << endl;
}

void printCongratulations() {
    cout << "Congratulations, you have finished the prequel to M3LAB1!" << endl;
}

void printAcceptance() {
    cout << "You wait out the rest of your days in the void, never knowing what was behind either door." << endl;
}

void printIceCreamBanish() {
    cout << "Oh, well back to the void you go..." << endl;
}

bool getResponse() {
    cout << "Enter y/n: ";
    char response;
    cin >> response;
    return response == 'y';
}

// Door Branch
bool approachDoor() {
    cout << "Do you approach the door?" << endl;
    return getResponse();
}

bool enterDoor() {
    cout << "You approach the doors. Which one do you enter? (y = the left door, n = the right one)" << endl;
    return getResponse();
}

bool iceCreamDoor() {
    cout << "You enter the left door and awake in what appears to be a Candy Shop" << endl;
    cout << "Strange Store Clerk: \"Oh, hey unceremoniously materializing stranger! Care for some ice cream?\"" << endl;
    return getResponse();
}

void printLoopDoor() {
    cout << "You enter the right door, only to find it returned you to the same place you started" << endl;
}

int main() {

    bool stuckInTheVoid = true;
    while (stuckInTheVoid) {
        printIntro();
        bool approachedDoor = approachDoor();
        if (approachedDoor) {

            bool whichDoor = enterDoor();
            if (whichDoor) { // Left door                
                bool wantIceCream = iceCreamDoor();
                if (wantIceCream) {
                    printCongratulations();
                    stuckInTheVoid = false;
                    printTheEnd();
                }
                else printIceCreamBanish();
            }
            else { // Right door
                printLoopDoor();
            }
        }
        else {            
            printAcceptance();
            stuckInTheVoid = false; // You are no longer "stuck" because in your mind you have accepted your fate.
            printTheEnd();
        }
    }

    return 0;
}



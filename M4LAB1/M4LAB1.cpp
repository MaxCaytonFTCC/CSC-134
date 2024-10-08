// CSC 134 
// M4LAB1
// Max Cayton
// 10/8/24

#include <iostream>
using namespace std;


int main() {

    int height, width;

    cout << "Enter block height: ";
    cin >> height;

    cout << "Enter block width: ";
    cin >> width;
    

    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl;   
    }

    return 0;
}
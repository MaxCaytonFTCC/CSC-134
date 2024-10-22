// CSC 134 
// M5T2
// Max Cayton
// 10/22/24

#include <iostream> 

using namespace std;

void printAnswer(int number, int result); 
int square(int number);

int square(int number) {
    return number * number;
}

void printAnswer(int number, int result) { 
    cout << number << " squared = " << result << endl;
} 

int main() { 

    int count = 1;
    int result;

    while (count <= 10) {
        result = square(count);
        printAnswer(count,result);
        count++;
    }

    return 0; 
} 
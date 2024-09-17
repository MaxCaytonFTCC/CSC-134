// CSC 134
// M2HW1_Q3
// Max Cayton
// 9/17/2024

#include <iostream>

using namespace std;

int main() {

    const int PIZZA_SLICES_PER_VISITOR = 3;

    int visitorCount = 0,
        pizzaCount = 0,
        slicesPerPizza = 0,
        slicesLeftOver = 0;
    
    // Input
    cout << "Enter the number of visitors: ";
    cin >> visitorCount;
    cout << "Enter the number of pizzas ordered: ";
    cin >> pizzaCount;
    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;

    // Calculation
    slicesLeftOver = (pizzaCount * slicesPerPizza) % (visitorCount * PIZZA_SLICES_PER_VISITOR);
    
    // Output
    cout << "There are " << slicesLeftOver << " slices left over.";

}
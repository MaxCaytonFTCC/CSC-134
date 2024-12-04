#include <iostream>
using namespace std;

class Restaurant {
    public:
        // Method Declarations
        void SetName(string restaurantName);
        void SetRating(int userRating);
        void Print() const;
    private:
        string name;
        int rating;
};

// Define Methods
void Restaurant::SetName(string restaurantName) {
    name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
    rating = userRating;
}

void Restaurant::Print() const {
    cout << name << " -------- "  << rating << " stars" << endl;
}

int main() {

    Restaurant miCasita = Restaurant();
    miCasita.SetName("Mi Casita");
    miCasita.SetRating(5); // I agree, Mi Casita is amazing.
    miCasita.Print();

    Restaurant krustyKrab = Restaurant();
    krustyKrab.SetName("The Krusty Krab");
    krustyKrab.SetRating(4);
    krustyKrab.Print();

    Restaurant chumBucket = Restaurant();
    chumBucket.SetName("The Chum Bucket");
    chumBucket.SetRating(2);
    chumBucket.Print();

    return 0;
}

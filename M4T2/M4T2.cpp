// CSC 134 
// M4T2
// Max Cayton
// 10/8/24

#include <iostream>
using namespace std;


int main() {

    const int MIN_PLAYERS = 2;
    const int MAX_PLAYERS = 20;

    int teamPlayers;
    int players;

    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;

    // Validate Input
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS) {

        cout << "You should have at least " << MIN_PLAYERS
             << ", but no more than " << MAX_PLAYERS << " per team.\n";
            
        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;        

    }

    cout << "How many players are available? ";
    cin >> players;

    while (players <= 0) {
        cout << "Please enter 0 or greater ";
        cin >> players;
    }

    return 0;
}
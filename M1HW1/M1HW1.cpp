// CSC 134
// M1HW1
// Max Cayton
// 8/27/2024

#include <iostream>
using namespace std;

int main() {
    
    // Box office source: https://www.boxofficemojo.com/title/tt0167261/ 
    // Quote source: https://www.imdb.com/title/tt0167261/quotes/

    // Details
    string movieName = "The Lord of the Rings: The Two Towers";
    int releaseYear = 2002;
    double worldWideBoxOffice = 937.9; // Million

    // Quotes
    string samQuote = "\"That there's some good in this world, Mr. Frodo... and it's worth fighting for.\"";
    string legolasQuote = "\"They're taking the hobbits to Isengard!\"";
    string uglukQuote = "\"Look's like meat's back on the menu boys!\"";
    string grimaQuote = "\"His staff. I told you to take the Wizard's staff.\"";

    // Display Movie Details
    cout << "Movie Details:" << endl;
    cout << "Movie Title: " << movieName << endl;
    cout << "Movie Release Year: " << releaseYear << endl;
    cout << "Movie Worldwide Box Office: " << worldWideBoxOffice << "\n" << endl;

    // Display Quotes:
    cout << "Movie Quotes:" << endl;
    cout << samQuote << "-Samwise Gamgee" << endl;
    cout << legolasQuote << "-Legolas" << endl;
    cout << uglukQuote << "-Ugluk" << endl;
    cout << grimaQuote << "-Grima Wormtongue" << endl;


}
#include <iostream>
using namespace std;



void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_go_inside();
void choice_cpp();
void choice_java();
void choice_div();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    
    // Added '.clear()' due to infinite loop when inputing an invalid string
    cin.clear();
    cin.ignore();

    main_menu();
  }
}

void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } 
  else {
    cout << "That's not a valid choice, please try again." << endl;  
    cin.clear();
    cin.ignore();
    choice_front_door();
  }
}

void choice_back_door() { 
  cout << "Sneak around to the back door" << endl;
  cout << "It slowly opens with a loud creaking sound." << endl;
  cout << "Do you:" << endl;
  cout << "1. Go inside" << endl;
  cout << "2. Go home instead" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_go_inside();
  } else if (2 == choice) {
    choice_go_home();
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;  
    cin.clear();
    cin.ignore();
    choice_back_door();
  }  
}

void choice_go_inside() {
  cout << "You slowly creep inside" << endl;
  cout << "A spectral figure descends from above" << endl;
  cout << "\"Who are you..?\" the specter asks" << endl;
  cout << "Do you:" << endl;
  cout << "1. Say \"A C++ Programmer!\"" << endl;
  cout << "2. Say \"A Java Programmer!\"" << endl;
  cout << "3. Ask it how to center a <div>" << endl;
  cout << "4. Flee and return home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_cpp();
  } else if (2 == choice) {
    choice_java();
  } else if (3 == choice) {
    choice_div();
  } else if (4 == choice) {
    choice_go_home();
  }  
  else {
    cout << "That's not a valid choice, please try again." << endl;  
    cin.clear();
    cin.ignore();
    choice_go_inside();
  }
}

void choice_cpp() {
  cout << "The specter leaves you alone, for it knows that you will be able" << endl;
  cout << "to run far too fast to be caught" << endl;
  cout << "You return home safely" << endl;
}

void choice_java() {
  cout << "The specter sympathizes with your poor lost soul." << endl;
  cout << "It decides to let you go out of mercy." << endl;
  cout << "You return home, but are you truly free?" << endl;
}

void choice_div() {
  cout << "The specter is enraged by your ignorance." << endl;
  cout << "It tried to annihilate you by sending a bolt of magic at the center of the room." << endl;
  cout << "But for some reason, the magical bolt was aligned to the left side of the room, missing you entirely." << endl;
  cout << "You take this opportunity to run away and return home. Then you look at W3Schools." << endl;
}

void choice_go_home() {
    cout << "You prove you are not the average horror movie protagonist and do the sensible thing." << endl;
    cout << "You return safely home." << endl;
}

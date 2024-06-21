#include <iostream>
using namespace std;

int main() {
    int i;
    int input;
    
    // Guess the number 65
    // The user has 100 chances
    
    for (i = 1; i <= 100; i++) {
        cout << "Guess the number (between 1 and 100): ";
        cin >> input;
        
        if (input == 65) {
            cout << "Congrats! You have guessed correctly." << endl;
            break;  // Exit the loop if the guess is correct
        } else {
            cout << "Incorrect guess. Try again." << endl;
        }
    }

    if (i > 100) {
        cout << "Sorry, you have used all your chances. The correct number was 65." << endl;
    }

    return 0;
}


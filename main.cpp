#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numberToGuess = std::rand() % 50 + 1;
    int userGuess;
    char input;

    cout << "ready to start the casino number guessing game, y/n? \n";
    cin >> input;
    cout << endl;
    if(input == 'n' || input == 'N')
    {
        cout << "later then." << endl;
        return 0;
    }
    else if (input == 'y' || input == 'y'){
    cout << "i'm thinking of a number between 1 and 50, what is it?\n";

    for (int attempts = 1; attempts <= 7; attempts++) {
        cout << "this is attempt " << attempts << "/7. enter your guess: ";
        cin >> userGuess;

        if (userGuess == numberToGuess) {
            cout << "congrats! you guessed the number!\n";
            return 0;
        } else if (userGuess < numberToGuess) {
            cout << "too low! try again.\n";
        } else {
            cout << "too high! try again.\n";
        }
    }

    cout << "sorry, you didn't guess the number. it was " << numberToGuess << ".\n";
    return 0;
    } 
}

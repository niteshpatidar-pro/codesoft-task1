#include<bits/stdc++.h>
using namespace std;

void guessTheNumber() {
   srand(time(0)); // Seed random number generator
    int numberToGuess =rand() % 100 + 1;
    int guess = 0;
    cout<<numberToGuess<<endl;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;
    
    while (guess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly." << endl;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}
#include <iostream> //Allows use of input/output functions
#include <cmath> //Allows you to work with math functions
#include <time.h>
#include <string>
using namespace std;

void GuessingGame1();
void GuessingGameWithLimit();
void GuessingGame2();
void GuessingGame3();

string answer1;
string answer2;
string answer3;

int main()
{

    cout << "Would you like to play a guessing game? Y/N \n";
    cin >> answer1;
        if (answer1 == "Y") {
            GuessingGame1();
    }
        else if (answer1 == "N"){
            cout << "Invalid response.";
    }

    cout << "Would you like to try a harder game? Y/N \n";
    cin >> answer2;

        if (answer2 == "Y") {
            GuessingGameWithLimit();
        }
        else if (answer2 == "N") {
            cout << "Invalid response.";
        }

        cout << "Would you like to try an even tougher game? Y/N \n";
        cin >> answer2;

        if (answer2 == "Y") {
            GuessingGame3();
        }
        else if (answer2 == "N") {
            cout << "Invalid response.";
        }
  
    return 0;
}

void GuessingGame3() {
    //Random number guessing game
       // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess = 0;

    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (guess != secretNumber)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed my number!" << endl;
        }
    }
}


void GuessingGameWithLimit() {
    int secretNum = 7;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 5;
    bool outOfGuesses = false;
    
    cout << "Guess what number I'm thinking of. \n";
    cout << "You have 5 tries. \n";
    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter Guess: ";
            cin >> guess;
            if (guess == secretNum) {
                cout << "You Win! \n";
                return;
            }
            guessCount++;
            cout << "Nope! \n";
        }
        else {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses) {
        cout << "You Lose! \n";
    }
   
}


void GuessingGame1() {
    //While Loop Version
    int secretNum = 7;
    int guess = 0;

    while (secretNum != guess) {
        cout << "Enter Guess: ";
        cin >> guess;
        if (guess < secretNum) {
            cout << "Too low, try again! \n";
        }
        else if (guess > secretNum) {
            cout << "Too high, try again! \n";
        }
    }
    cout << "You Win! ";
}

//Same as the game above
void GuessingGame2() {
    //Do-While Loop Version
    int secretNum = 7;
    int guess = 0;

    do {
        cout << "Enter Guess: ";
        cin >> guess;
    } while (secretNum != guess);

    cout << "You Win! ";
}
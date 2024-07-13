#include <iostream> //Allows use of input/output functions
#include <cmath> //Allows you to work with math functions
using namespace std;

void GuessingGame1();
void GuessingGameWithLimit();
void GuessingGame2();
void GuessingGame3();

int main()
{
    GuessingGame1();
    GuessingGameWithLimit();
    GuessingGame2();
    GuessingGame2();


    return 0;
}

void GuessingGame1() {
    //Random number guessing game
       // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess = 0;

    std::cout << "I have chosen a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    while (guess != secretNumber)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > secretNumber)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else if (guess < secretNumber)
        {
            std::cout << "Too low! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You guessed my number!" << std::endl;
        }
    }
}


void GuessingGameWithLimit() {
    int secretNum = 7;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    cout << "Let's play a game, guess what number I'm thinking of! \n";
    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter Guess: ";
            cin >> guess;
            guessCount++;
            cout << "Nope!";
        }
        else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You Lose!";
    }
    else {
        cout << "You Win!";
    }
}


void GuessingGame2() {
    //While Loop Version
    int secretNum = 7;
    int guess = 0;

    while (secretNum != guess) {
        cout << "Enter Guess: ";
        cin >> guess;
    }
    cout << "You Win!";
}


void GuessingGame3() {
    //Do-While Loop Version
    int secretNum = 7;
    int guess = 0;

    do {
        cout << "Enter Guess: ";
        cin >> guess;
    } while (secretNum != guess);

    cout << "You Win!";
}


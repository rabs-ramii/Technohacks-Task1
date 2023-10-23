
// task1 Number Guessing Game of c++ programming internship

#include <iostream> //importing important libraries
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // Seed for random number generation

    int secretNumber = rand() % 100 + 1; // Generates a random number between 1 and 100
    int attempts = 0;
    int userGuess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it!" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < secretNumber)
        {
            cout << "Too low! Try guessing higher." << endl;
        }
        else if (userGuess > secretNumber)
        {
            cout << "Too high! Try guessing lower." << endl;
        }
        else
        {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}

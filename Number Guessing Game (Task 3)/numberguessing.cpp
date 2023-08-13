#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
   
    srand(time(nullptr));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    while (true) {

        cout << "Enter your guess between 1 to 100: ";
        cin >> guess;

        attempts++;

        if (guess == secretNumber) 
        {
            cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << endl;
            break;
        } 
        
        else if (guess < secretNumber) 
        {
            cout << "Try a higher number." << endl;
        } 
        
        else 
        {
            cout << "Try a lower number." << endl;
        }
    }

    return 0;
}

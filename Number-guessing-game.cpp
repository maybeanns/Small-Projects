#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int n = 1 + rand() % 100; // randomnumber b/w 1 & 100
    int guess;                // guess is user's input.
    int tries = 5;

    cout << "*********Guess the number*********** " << endl;
    do
    {

        
        if (tries != 0)
        {
            cout << "Enter your guess: ";
            cin >> guess;
            if (guess > n)
            {
                cout << "Guess Lower" << endl;
                tries--;
            }
            if (guess < n)
            {
                cout << "Guess Higher" << endl;
                tries--;
            }
        }
        else 
        {
            cout<<"Sorry! You Lost"<<endl;
            break;
        }

    } while (guess != n);

    if (guess == n)
    {
        cout << "You Won!" << endl;
    }

    return 0;
}
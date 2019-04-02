/**
 * Guess The Number Game
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess = 0;
    int tryCount = 8;

    while (guess != number && tryCount > 0) {
        cout << tryCount << " tries remaining\n";
        cout << "Please enter a guess: ";
        cin >> guess;

        if (guess < number) {
            cout << "\nToo Low\n" << endl;
        } else if (guess > number) {
            cout << "\nToo High\n" << endl;
        } else if (guess == number) {
            cout << "\nYou guessed the number!\n";
        }

        tryCount--;
        if(tryCount == 0) {
            cout << "Sorry, the number was: " << number;
            break;
        }
    }

    return 0;
}

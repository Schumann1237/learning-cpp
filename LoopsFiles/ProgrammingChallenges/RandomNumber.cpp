// Write a program that generates a random number and asks the user to guess what the number is. If the user's guess
// is higher than the random number, the program should display "Too high, try again." If the user's guess is lower
// than the random number, the program should display "Too low,try again." The program should use a loop that repeats
// until the user correctly guesses the random number.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int InputNumber;

int main()
{
    srand(time(0));
    int RandomNumber = rand() % 10 + 1;
    cout << "Guess the number that has been generated. ";

    do
    {
        cin >> InputNumber;
        if (InputNumber > RandomNumber)
        {
            cout << "Too high, try again. ";
        }
        else if (InputNumber < RandomNumber)
        {
            cout << "Too low, try again. ";
        }
        else 
        {
            cout << "You guessed right.";
        }
    } while (InputNumber != RandomNumber);
    return 0;
}

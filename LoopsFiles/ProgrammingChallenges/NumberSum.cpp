// Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all
// the integers from 1 up to the number entered. For example, if the user enters 50, the loop will find the
// sum of 1, 2, 3, 4, ..., 50

#include <iostream>
using namespace std;

int ENTER_VALUE, sum;

int main()
{
    // Ask user for positive integer value
    cout << "Find the sum of ";
    cin >> ENTER_VALUE;

    // Loop to find sum
    for (int value = 0; value <= ENTER_VALUE; value++)
    {
        sum += value;
    }    
    cout << "The sum of all integers from 1 to " << ENTER_VALUE << " is " << sum  << endl;
    return 0
}
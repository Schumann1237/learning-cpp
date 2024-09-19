// Write a program that asks the user to enter two numbers. The program should
// use the conditional operator to determine which number is the smaller
// and which is the larger

#include <iostream>
using namespace std;

float number1, number2;

int main()
{
    cout << "1st number: ";
    cin >> number1;
    cout << "2nd number: ";
    cin >> number2;

    cout << fixed;
    if (number1 > number2)
        cout << number1 << " is bigger than " << number2;
    else 
        cout << number2 << " is bigger than " << number1;
    return 0;
}
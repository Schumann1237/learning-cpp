/*
Programming Challenge 1:
    Write a program that calculates a car's gas mileage. The program should ask the user to enter
    the number of gallons of gas the car can hold and the number of miles it can be driven on a
    full tank. It should then display the number of miles that may be driven per gallon of gas.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float MAX_GAS, MAX_MILES, MILES_PER_GAS;

int main()
{
    cout << "How many gallons of gas can your car hold?" << endl;
    cin >> MAX_GAS;
    cout << "How many miles can your car drive on a full tank?" << endl;
    cin >> MAX_MILES;
    
    MILES_PER_GAS = MAX_GAS/MAX_MILES;
    cout << fixed << showpoint << setprecision(2);
    cout << "Your car can drive " << MILES_PER_GAS << " miles per gallon of gas.";
    return 0;
}
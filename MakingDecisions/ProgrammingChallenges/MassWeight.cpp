// Scientists measure an object's mass in kilograms and its weight in newtons. If you know the amount of mass
// that an object has, you can calculate its weight, in newtons, with the following formula:

// Weight = mass x 9.8
// Write a program that asks the user to enter an object's mass, and then calculates and displays its weight.
// If the object weights more than 1,000 newtons, display a message indicating that it is too heavy. If the 
// object weighs less than 10 newtons, display a message indicating that the object is too light.

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float MASS, WEIGHT;

int main()
{
    cout << "Insert object's mass: ";
    cin >> MASS;

    WEIGHT = MASS * 9.8;
    cout << fixed << setprecision(2);
    if (WEIGHT > 1000)
        cout << "This object is too heavy.";
    else if (WEIGHT < 10)
        cout << "This object is too light.";
    else 
        cout << "This object weighs " << WEIGHT << " newtons.";
    return 0;
}
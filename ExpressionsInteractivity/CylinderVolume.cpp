#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double volume, radius, height, PI = 3.14159;

    cout << "This program will tell you the volume of \n";
    cout << "a cylinder-shaped fuel tank.\n";
    cout << "How tall is the tank? ";
    cin >> height;
    cout << "What is the radius of the tank? ";
    cin >> radius;
    
    volume = PI * pow(radius, 2.0) * height;
    cout << "The volume of the cylinder tank is " << volume;
    return 0;
}
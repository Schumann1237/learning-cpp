/*
    Write a program that calculates the average rainfall for three months. The program should ask the user to
    enter te name of each month, such as June or July, and the amount of rain (in inches) that fell each
    month. The program should display a message similar to the following:

    The average rainfall for June, July, and August is 6.72 inches.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float rainfall1, rainfall2, rainfall3, averageRainfall;
string month1, month2, month3;

int main()
{
    cout << "Please enter the first month: ";
    getline(cin, month1);
    cout << "Please enter the second month: ";
    getline(cin, month2);
    cout << "Please enter the third month: ";
    getline(cin, month3);

    cout << "Amount of rain in " << month1 << "? ";
    cin >> rainfall1;
    cout << "Amount of rain in " << month2 << "? ";
    cin >> rainfall2;
    cout << "Amount of rain in " << month3 << "? ";
    cin >> rainfall3;

    averageRainfall = (rainfall1 + rainfall2 + rainfall3) / 3;
    cout << fixed << showpoint << setprecision(2);
    cout << "The average rainfall for " << month1 <<
    ", " << month2 << ", and " << month3 << " is " << averageRainfall << " inches";
    return 0;
}
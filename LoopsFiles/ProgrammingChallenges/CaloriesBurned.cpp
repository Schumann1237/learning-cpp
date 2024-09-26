// Running on a particular treadmill you burn 3.6 calories per minute. Write a program that uses a loop to display the number
// of calories burned after 5, 10, 15, 20, 25, and 30 minutes.
#include <iostream>
#include <iomanip>
using namespace std;

int minutes = 5;
float CaloriesBurned = 3.6;

int main()
{
    cout << "Calories burned per minute" << endl;
    cout << "----------------------------\n";
    cout << "Minute\t" << "Calories burned" << endl;

    for (int i = 1; i <= 6; i++)
    {
        cout << fixed << showpoint << setprecision(2);
        cout << minutes << "\t" << CaloriesBurned << endl;
        minutes += 5;
        CaloriesBurned += 3.6;
    }
    return 0;
}

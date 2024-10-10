// Write a program that calculates how much a person would earn over a period of time if his or her salary is one 
// penny the first day and two pennies the second day, and continues to double each day. The program should ask the
// user for the number of days. Display a table showing how much the salary was for each day, and then show the total
// pay at the end of the period. The output should be displayed in a dollar amount, not the number of pennies.
// Input validation: Do not accept a number less than 1 for the number of days worked

#include <iostream>
#include <iomanip>
using namespace std;

float SalaryEarned = 0.01;
int DaysWorked;

int main()
{
    do // ask user for number of days
    {
        cout << "how many days have you worked? ";
        cin >> DaysWorked;
    } while (DaysWorked < 1);

    cout << "Days Worked\t" << "Salary Per Day" << endl;
    cout << "------------------------------------" << endl;

    for (int i = 1; i <= DaysWorked; i++) // loop to display days worked and salary earned 
    {
        cout << fixed << showpoint << setprecision(2);
        cout << i << "\t\t" << SalaryEarned << endl;
        SalaryEarned *= 2; // Salary doubles every day
    }
    return 0;
}


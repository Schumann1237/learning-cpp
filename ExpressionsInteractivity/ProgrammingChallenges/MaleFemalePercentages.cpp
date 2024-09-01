/*
    Write a program that asks the user for the number of males and the number of females registered
    in a class. The program should display the percentage of males and females in the class.

    Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the class. The 
    percentage of males can be calculated as 8/20 = 0.4 or 40%. The percentage of females can be
    calculated as 12/20 = 0.6, or 60%
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float MaleNumber, FemaleNumber, TotalStudents, MalePercent, FemalePercent;

int main()
{
    cout << "How many males: ";
    cin >> MaleNumber;
    cout << "How many females: ";
    cin >> FemaleNumber;
    
    TotalStudents = MaleNumber + FemaleNumber;
    MalePercent = MaleNumber / TotalStudents;
    FemalePercent = FemaleNumber / TotalStudents; 

    cout << fixed << showpoint << setprecision(2);
    cout << "Percentage of males: " << MalePercent << "%" << endl;
    cout << "Percentage of females: " << FemalePercent << "%" << endl;
    return 0;
}
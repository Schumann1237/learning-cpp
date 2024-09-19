// The date June 10, 1960 is special because when we write it in the following format, the month times the day
// equals the year. 6/10/60. Write a program that asks the user to enter a month (in numeric form), a day,
// and a two digit year. The program should then determine whether the month times the day is
// equal to the year. If so, it should display a message saying the date is magic. Otherwise it should display
// a message saying the date is magic. Otherwise it should display a message saying
// the date is not magic.

#include <iostream>
#include <iomanip>
using namespace std;

int DAY, MONTH, YEAR;

int main()
{
    cout << "Enter a month: ";
    cin >> MONTH;
    cout << "Enter a day: ";
    cin >> DAY;
    cout << "Enter a year: ";
    cin >> YEAR;
    
    if ((MONTH*DAY) == YEAR)
        cout << "The date is magic.";
    else 
        cout << "The date is not magic.";
    return 0;
}


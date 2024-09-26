// Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program that displays
// a table showing the number of millimeters that the ocean will have risen each year for the next 25 years.
#include <iostream>
#include <iomanip>
using namespace std;

int YearCount = 25, year = 2025;
float OceanLevel = 1.5;

int main()
{
    cout << "Yearly Ocean Level Count" << endl;
    cout << "--------------------------\n\n";
    cout << "Year\t" << "Ocean Level" << endl;

    for (int i = 1; i <= YearCount; i++)
    {
        cout << fixed << showpoint << setprecision(2);
        cout << year << "\t" << OceanLevel << " mm" << endl; 
        year++;
        OceanLevel += 1.5;
    }   
    
    return 0;
}


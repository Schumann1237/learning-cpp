// If a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles. Write a program that asks
// the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. The program should then use 
// a loop to display the distance the vehicle has traveled for each hour of that time period. 
#include <iostream>
#include <iomanip>
using namespace std;

int HoursTraveled, DistanceTraveled, VehicleSpeed;

int main()
{
    cout << "What is the speed of the vehicle in mph? "; 
    cin >> VehicleSpeed;
    cout << "How many hours has it traveled? ";
    cin >> HoursTraveled;
    cout << "Hour\t" << "Distance Traveled" << endl;
    cout << "------------------------------" << endl;
    
    for (int i = 1; i <= HoursTraveled; i++)
    {
        cout << fixed << right;  
        DistanceTraveled = i * VehicleSpeed;
        cout << i << "\t\t" << DistanceTraveled << endl;
    }
    return 0;
}

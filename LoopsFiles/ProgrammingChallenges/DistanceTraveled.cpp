// If a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles. Write a program that asks
// the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. The program should then use 
// a loop to display the distance the vehicle has traveled for each hour of that time period. 
// Input Validation: Do not accept a negative number for speed and do not accept any value less than 1 for time traveled.

#include <iostream>
#include <iomanip>
using namespace std;

int HoursTraveled, DistanceTraveled, VehicleSpeed;

int main()
{
    do 
    {
        // Get HoursTraveled and VehicleSpeed
        cout << "What is the speed of the vehicle in mph? ";
        cin >> VehicleSpeed;
        cout << "How many hours has it traveled? ";
        cin >> HoursTraveled;

    } while (HoursTraveled < 1 || VehicleSpeed < 0); // Input validation. No negative Speed, and time at least 1 hour

    cout << "Hour\t" << "Distance Traveled" << endl;
    cout << "------------------------------" << endl;

    for (int i = 1; i <= HoursTraveled; i++) // i = hours
    {
        DistanceTraveled = i * VehicleSpeed; // Find distance = speed * time
        cout << i << "\t\t" << DistanceTraveled << endl;
    }
    return 0;
}

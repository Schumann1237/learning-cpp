#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    double length, width, height, 
    volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "length: ";
    cin >> length;
    cout << "width: ";
    cin >> width;
    cout << "height ";
    cin >> height;

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "Cost to build: " << cost << endl;
    cout << "Charge to customer: " << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}
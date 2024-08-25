#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    const double PI = 3.14159;
    double degrees, radians;

    cout << "Enter an angle in degrees and I will convert it\n";
    cout << "to radians for you: ";
    cin >> degrees;
    radians = degrees * PI / 180;

   cout << fixed << left << setprecision(4) << setw(5) << radians << endl; 
   return 0;
}
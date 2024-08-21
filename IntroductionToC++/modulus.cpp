// This program extracts the rightmost digit of a number.
#include <iostream>
using namespace std;

int main()
{
    int number = 12345;
    int rightMost = number % 10; // 12345/10 = 1234.5, remainder is 5, therefore 12345 % 10 = 5

    cout << "The rightmost digit in " << number << " is "
    << rightMost << endl;

    return 0;
}
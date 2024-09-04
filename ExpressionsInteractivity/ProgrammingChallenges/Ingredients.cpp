/*
    A cookie recipe calls for the following ingredients
    - 1.5 cups of sugar
    - 1 cup of butter
    - 2.75 cups of flour

    The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user
    how many cookies he or she wants to make, and then displays the number of cups of each ingredient needed 
    for the specified number of cookies.
*/
#include <iostream>
#include <iomanip>
using namespace std;

float TOTALSUGAR, TOTALBUTTER, TOTALFLOUR, COOKIE;

int main()
{
    cout << "How many cookies do you want to bake? ";
    cin >> COOKIE;

    TOTALSUGAR = COOKIE * 1.5;
    TOTALBUTTER = COOKIE * 1;
    TOTALFLOUR = COOKIE * 2.75;
    cout << "You need :\n";
    cout << TOTALSUGAR << " cups of sugar\n";
    cout << TOTALBUTTER << " cups of butter\n";
    cout << TOTALFLOUR << " cups of flour";
    return 0;
}
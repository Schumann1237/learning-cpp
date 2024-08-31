/*
    There are three seating categories at a stadium. For a softball game, Class A seats 
    cost $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how 
    many tickets for each class of seats were sold, then displays the amount of income generated
    from ticket sales. Format your dollar amount in fixed-point notation, with two decimal places of precision,
    and be sure the decimal point is always displayed.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int CLASS_A, CLASS_B, CLASS_C;
double TOTAL_SALES, A_SALE, B_SALE, C_SALE;

int main()
{
    cout << "How many Class A tickets were bought? ";
    cin >> CLASS_A;
    cout << "How many Class B tickets were bought? ";
    cin >> CLASS_B;
    cout << "How many Class C tickets were bought? ";
    cin >> CLASS_C;

    A_SALE = CLASS_A * 15;
    B_SALE = CLASS_B * 12;
    C_SALE = CLASS_C * 9;
    TOTAL_SALES = A_SALE + B_SALE + C_SALE;

    cout << fixed << showpoint << setprecision(2);
    cout << "Total A ticket sales: $" << A_SALE << endl;
    cout << "Total B ticket sales: $" << B_SALE << endl;
    cout << "Total C ticket sales: $" << C_SALE << endl;
    cout << "Income generated from ticket sales: $" << TOTAL_SALES;
    return 0;
}
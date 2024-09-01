/* 
    A retail store grants its customers a maximum amount of credit. 
    Each customer's available credit is his or her maximum amount of credit minus the amount of credit used,
    Write a pseudocode algorithm for a program that asks for a customer's maximum amount
    of credit and amount of credit used. The program should then display the customer's available credit.
*/

/*
    Ask customer to input maximum amount of credit
    Ask customer to input amount of credit used.
    Subtract used credit from max credit
    Display available credit
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double MAX_CREDIT, USED_CREDIT, AVAILABLE_CREDIT;

int main()
{
    cout << "What is your maximum amount of credit? " << endl;
    cin >> MAX_CREDIT;
    cout << "How much credit is used? " << endl;
    cin >> USED_CREDIT;

    AVAILABLE_CREDIT = MAX_CREDIT - USED_CREDIT;
    cout << fixed << showpoint << setprecision(2);
    cout << "You have a credit amount of " << AVAILABLE_CREDIT << " available.";
    return 0;
}

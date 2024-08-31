/*
    Write a pseudocode algorithm for a program that calculates the total of a retail sale. 
    The program should ask for the amount of the sale and the sales tax rate. 
    The sales tax rate should be entered as a floating-point number. For example, if the sales tax rate is
    6 percent, the user should enter 0.06. The program should display the amount of sales tax
    and the total of the sale.
*/

/*
    user inputs amount of sale
    user inputs sales tax rate
    amount of sales tax = sales * tax rate
    total sale = sale + amount of sales tax
    display amount of sale tax and total sale
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float Sale, Tax, SaleOnTax, TotalSales;

int main()
{
    cout << "How much in sales?" << endl;
    cin >> Sale;
    cout << "How much is tax?" << endl;
    cin >> Tax;
    
    SaleOnTax = Sale * Tax;
    TotalSales = SaleOnTax + Sale;
    cout << fixed << showpoint << setprecision(2);
    cout << "Sales before tax: " << Sale << endl;
    cout << "Tax percentage: " << Tax*100 << "%" << endl;
    cout << "Total tax: " << SaleOnTax << endl;
    cout << "Sales after tax: " << TotalSales << endl;
    return 0;
}
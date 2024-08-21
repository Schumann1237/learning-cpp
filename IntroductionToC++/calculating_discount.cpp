// This program calculates the sale price of an item
// that is regularly priced at $59.95, with a 20 percent disount subtracted.

#include <iostream>
using namespace std;

int main()
{
    // Variables
    double RegularPrice = 59.95, discount, SalePrice;

    // Calculate the amount of a 20% discount
    discount = RegularPrice * 0.2;

    // calculate the sale price by subtracting the discount from the regular price
    SalePrice = RegularPrice - discount;

    //Display the results
    cout << "Regular pricel: $" << RegularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << SalePrice << endl;
    return 0;
}
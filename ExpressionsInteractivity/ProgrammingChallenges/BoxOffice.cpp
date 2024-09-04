/*
    A movie theater only keeps a percentage of the reventue earned from ticket sales. The remainder goes to
    the movie distributor. Write a program that calculates a theater's gross and net box office profit for a 
    night. The program should ask for the name of the movie, and how many adult and child tickets were sold.
    (The price of an adult ticket is $10.00 and a child's ticket is $6.00). It should display a report
    similar to

    Movie name :                     "Wheels of Fury"
    Adult tickets sold :               382
    Child tickets sold :               127
    Gross box office profit :        $4582.00
    Net box office profit :          $ 916.40
    Amount paid to distributor :     $3665.60

    Assume the theater keeps 20 percent of the gross box office profit
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string MOVIENAME;
    const double ADULT_PRICE = 10.00, CHILD_PRICE = 6.00;
    const double THEATER_PERCENTAGE = 0.20;
    int ADULT_TICKETS, CHILD_TICKETS;
    double GROSSPROFIT, NETPROFIT, DISTRIBUTORMONEY;

    // Ask for movie name, number of adult tickets, and number of child tickets
    cout << "Movie Name: ";
    getline(cin, MOVIENAME);
    cout << "How many adults: ";
    cin >> ADULT_TICKETS;
    cout << "How many kids: ";
    cin >> CHILD_TICKETS;

    // Calculate gross profit, net profit, and money for distributor
    GROSSPROFIT = (ADULT_TICKETS * ADULT_PRICE) + (CHILD_TICKETS * CHILD_PRICE);
    NETPROFIT = GROSSPROFIT * THEATER_PERCENTAGE;
    DISTRIBUTORMONEY = GROSSPROFIT - NETPROFIT;

    // Display details
    cout << fixed << showpoint << setprecision(2);
    cout << "\nMovie Name:               \"" << MOVIENAME << "\"" << endl;
    cout << "Adult tickets sold:        " << ADULT_TICKETS << endl;
    cout << "Child tickets sold:        " << CHILD_TICKETS << endl;
    cout << "Gross Box Office Profit:  $" << setw(8) << GROSSPROFIT << endl;
    cout << "Net Box Office Profit:    $" << setw(8) << NETPROFIT << endl;
    cout << "Amount Paid to Distributor: $" << setw(8) << DISTRIBUTORMONEY << endl;

    return 0;
}

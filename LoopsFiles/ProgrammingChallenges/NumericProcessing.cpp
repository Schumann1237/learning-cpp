/* Write a program that opens the file, reads all the numbers from the file, and calculates the following:
 * a) The number of numbers in the file
 * b) The sum of all the numbers in the file (a running total)
 * c) the average of all the numbers in the file
 * The program should display the number of numbers found in the file, the sum, and the average of the numbers.
 */
 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    double sum = 0,
           total = 0,
           average,
           number;
    
    // Open file
    inputFile.open("TextFilesForData\\NumericProcessing.txt");
    
    if (inputFile.fail())
    {
        cout << "Error while opening file!";
    }
    
    else
    {
        // Calculate average, sum and display number
        while (inputFile >> number)
        {
            sum += number;
            total++;
        }

        average = sum / total;

        cout << "Sum of numbers is " << sum << endl;
        cout << "Average of numbers is " << average << endl;
        cout << "Total number of numbers is " << total << endl;
    }

    // Close file
    inputFile.close();
    cout << "File closed.";

    return 0;
}

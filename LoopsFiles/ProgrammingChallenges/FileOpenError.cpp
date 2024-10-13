// This program tests for file open errors.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream InputFile;
    int number;

    // Open the file
    InputFile.open("TextFilesForData\\NumericProcessing.txt");

    // If the file successfully opened, process it.
    if (InputFile){

        // Read the numbers from the file and display them.
        while (InputFile >> number){
            cout << number << endl;
        }
        
        // Close the file.
        InputFile.close();
    }
    else{
        // Display an error message
        cout << "Error opening the file.\n";
    }
    return 0;
}

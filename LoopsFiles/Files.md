## Using Files for Data Storage
When a program needs to save data for latest use, it writes the data in a file. The data can then be rad from the file at a later time. 

This secion discusses ways to create programs that write data to files and read data from files. When a file is used by a program, three steps are taken.

1. **Open the file.** Opening a file creates a connection between the file and the program. Opening an output file usually creates the file on the disk and allows the program to write data to it. Opening an input file allows the program to read data from the file.
2. **Process the file.** Data is either written to the file (if it is an output file) or read from the file (if it is an input file).
3. **Close the file.** After the program is finished using the file, the file must be closed. Closing a file disconnects the file from the program.

### Types of Files
In general, there are two types of files: text and binary. A _text file_ contains data that has been encoded as text, using a scheme such as ASCII or Unicode. Even if the file contains numbers, those numbers are stored in the file as a series of characters. As a result, the file may be opened and viewed in a text editor such as Notepad. A _binary file_ contains data that has not been convered to text. Thus, you cannot view the contents of a binary file with a text editor. 

### File Access Methods
There are two general ways to access data stored in a file: sequential access and direct access. When you work with a _sequential access file_, you access data from the beginning of the file to the end of the file. If you want to read a piece of data that is stored at the very end of the file, you have to read all of the data that comes before it—you cannot jump directly to the desired data.

When you work with a _random access file_ (also known as a _direct access file_), you can jump directly to any piece of data in the file without reading the data that comes before it.

This chapter focuses on sequential access files, as they're easier.

### Filenames and File Stream Objects
Files on a disk are identified by a _filename_. For example, when you create a document with a word processor and then save the document in a file, you have to specify a filename.

In order for a program to work with a file on the computer's disk, the program must create a file stream object in memory. A _file stream object_ is an object that is associated with a specific file and provides a way for the program to work with that file. It is called a "stream" object because a file can be thought of as a stream of data.

### Setting Up a Program for File Input/Output
Just as **cin** and **cout** require the iostream file to be included in the program, C++ file access requires another header file. The file **fstream* contains all the declarations necessary for file operations.
~~~cpp
#include <fstream>
~~~
The fstream header file defines the data types **ofstream**, **ifstream**, and **fstream**. An object of one of these data types must be defined before C++ can work with a file. The object will be "linked" with an actual file on the computer's disk, and the operations that may be performed on the file depend on which of these three data types you pick for the file stream object.

|File Stream Data Type|Description|
|---|---|
|ofstream|Output file stream. You create an object of this data type when you want to create a file and write data to it.|
|ifstream|Input file stream. You create an object of this data type when you want to open an existing file and read data from it.|
|fstream|File stream. Objects of this data type can be used to open files for reading, writing, or both.|

    This chapter only discuss ofstream and ifstream types. fstream is covered in Chapter 12

### Creating a File Object and Opening a File
Before data can be written to or read from a file, the following things must happen:

- A file stream object must be created
- The file must be opened and linked to the file stream object

The following snippets showcase opening a file for input (reading), and output (writing).
~~~cpp
ifstream inputFile;
inputFile.open("Customers.txt");
~~~
~~~cpp
ofstream outputFile;
outputFile.open("Employees.txt");
~~~

Often, when opening a file, you will need to specify its path as well as its name. Note that two backlashes are needed to represent one backlash in a string literal.
~~~cpp
ifstream inputFile;
inputFile.open("C:\\data\\inventory.txt")
~~~

It is possible to define a file stream object and open a file in one statement.
~~~cpp
ifstream inputFile("inventory.txt");
~~~
~~~cpp
ofstream outputFile("inventory.txt");
~~~

### Closing a File
Although a program's files are automatically closed when the program shuts down, it is a good programming practice to write statements that close them. 

- Most operating systems temporarily store data in a _file buffer_ before it is written to a file. A file buffer is a small "holding section" of memory that file-bound data is first written to. When the buffer is filled, all the data stored there is written to the file.
- Some operating systems limit the number of files that may be open at one time. When a program closes files that are no longer being used, it will not deplete more of the operating system's resources than necessary.

Calling the file stream object's close member function closes a file.
~~~cpp
inputFile.close();
~~~

### Writing Data to a File
~~~cpp
// This program writes data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("demofile.txt");

    cout << "Now writing data to the file.\n";

    // Write four names to the file.
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // Close the file
    outputFile.close()
    cout << "Done.\n";
    return 0;
}
~~~

### Reading Data from a File
~~~cpp
// This program reads data from a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    string name;

    inputFile.open("Friends.txt");
    cout << "Reading data from the file.\n";

    inputFile >> name;    // Read name 1 from the file
    cout << name << endl; // Display name 1

    intputFile >> name;   // Read name 2 from the file
    cout << name << endl; // Display name 2

    intputFile >> name;   // Read name 3 from the file
    cout << name << endl; // Display name 3

    inputFile.close();    // Close the file
    return 0;
}
~~~

### Reading Numeric Data from a Text File
~~~cpp
// This program reads numbers from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int value1, value2, value3, sum;

    // Open the file
    inFile.open("NumericData.txt");

    // read the three numbers from the file
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;

    // Close the file. 
    inFile.close();

    // calculate the sum of the numbers.
    sum = value1 + value2 + value3;

    // Display the three numbers.
    cout << "Here are the numbers:\n"
         << value1 << " " << value2 << " " << value3 << endl;
    
    // Display the sum of the numbers.
    cout << "Their sum is: " << sum << endl;
    return 0;
}
~~~

### Using Loops to Process Files
~~~cpp
// This program reads data from a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // File stream object
    int numberOfDays;    // Number of days of sales
    double sales;        // sales amount for a day

    // Get the number of days
    cout << "For how many days do you have sales? ";
    cin >> numberOfDays;

    // Open a file named Sales.txt
    outputFile.open("Sales.txt");

    // Get the sales for each day and write it to the file
    for (int count = 1; count <= numberOfDaysl count++)
    {
        // Get the sales for a day.
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;

        // Write the sales to the file.
        outputFile << sales << endl;
    }

    // Close the file.
    outputFile.close();
    cout << "Data written to Sales.txt\n";
    return 0;
}
~~~

### Detecting the End of the File
~~~cpp
// This program reads data from a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Open the file.
    intputFile.open("ListOfNumbers.txt");

    // Read the numbers from the file and display them
    while (inputFile >> number)
    {
        cout << number << endl;
    }

    // Close the file.
    intputFile.close();
    return 0;
}
~~~

### Testing for File Open Errors
~~~cpp
// This program tests for file open errors
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Open the file
    inputFile.open("BadListOfNumbers.txt");

    // If the file successfully opened, process it
    if (inputFile)
    {
        // Read the numbers from the file and 
        // display them.
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        // Close the file
        inputFile.close();
    }
    else
    {
        // Display an error message.
        cout << "Error opening the file.\n";
    }
    return 0;
}
~~~
Another way to detect a failed attempt to open a file is with the fail member function.
~~~cpp
ifstream inputFile;
inputFile.open("customers.txt");
if (inputFile.fail())
{
    cout << "Error opening file.\n";
}
else
{
    // Process the file.
}
~~~

### Letting the User Specify a Filename
In many cases, you will want the user to specify the name of a file for the program to open. In C++ 11, you can pass a string object as an argument to a file stream object's open member function.

~~~cpp
// This program lets the user enter a filename
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filename;
    int number;

    // get the filename from the user
    cout << "Enter the filename: ";
    cin >> filename;

    // Open the file.
    inputFile.open(filename);

    // If the file successfully opened, process it
    if (inputFile)
    {
        // Read the numbers from the file and 
        // display them
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        // Close the file
        inputFile.close();
    }
    else
    {
        // Display an error message
        cout << "Error opening the file.\n";
    }
    return 0;
}
~~~

### Using the c_str Member Function in Older Versions of C++
In older versions of the C++ language, a file stream object's open member function will not accept a string object as an argument. 
The open member function requires that you pass the name of the file as a null-terminated string, which is also known as a C-string. String literals are stored in memory as null-terminated C-strings, but string objects are not.

Fortunately, string objects have a member function named c_str that returns the contents of the object formatted as a null-terminated C-string. 

Our inputFile line can be rewritten as 
~~~cpp
inputFile.open(filename.c_str());
~~~

## Optional Topcs: Breaking and Continuing a Loop
The break statement causes a loop to terminate early. The continue statement causes a loop to stop its current iteration and begin the next one.

**Use the break and continue statements with great caution. Because they bypass the normal condition that controls the loop's iterations, these statements make code difficult to understand and debug. For this reason, you should avoid using break and continue whenever possible.**

~~~cpp
// This program raises the user's number to the powers
// of 0 through 10
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value;
    char choice;

    cout << "Enter a number: ";
    cin >> value;
    cout << "This program will raise " << value;
    cout << " to the powers of 0 through 10.\n";
    for (int count = 1; count <= 10; count ++)
    {
        cout << value << " raised to the power of ";
        cout << count << " is " << pow(value, count);
        cout << "\nenter Q to quit or any other key ";
        cout << "to continue.";
        cin >> choice;
        if (choice == 'q' || choice == 'Q')
            break;
    }
    return 0;
}
~~~

### Using break in a Nested Loop
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int star = 0; star < 20; star++)
        {
            cout << '*';
            if (star == 10)
                break;
        }
        cout << endl;
    }
    return 0;
}
~~~
~~~cpp
***********
***********
***********
***********
***********
~~~

### The continue Statement
The continue statement causes the current iteration of a loop to end immediately. When continue is encountered, all the statements in the body of the loop that appear after it are ignored, and the loop prepares for the next iteration.

In a **while** loop, this means the program jumps to the test expression at the top of the loop.
As usual, if the expression is still ture, the next iteration begins. In a **do-while** loop, the program jumps to the test expression at the bottom of the loop, which determines whether the next iteration will begin. In a **for** loop, continue causes the update expression to be executed and then the test expression to be evaluated.

~~~cpp
// This program calculates the charges for DVD rentals.
// Every third DVD is free.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dvdCount = 1;     // DVD counter
    int numDVDs;          // Number of DVDs rented
    double total = 0.0;   // Accumulator
    char current;         // Current release Y or N

    // Get the number of DVDs
    cout << "How many DVDs are being rented? ";
    cin >> numDVDs;

    // Determine the charges
    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " is free!\n";
            continue; // Immediately start the next iteration.
        }
        cout << "Is DVD #" << dvdCount;
        cout << " a current release? (Y/N) ";
        cin >> current;
        if (current == 'Y' || current == 'y')
            total += 3.50;
        else 
            total += 2.50;
    } while (dvdCount++ < numDVDs);

    // Display the total
    cout << fixed << showpoint << setprecision(2);
    cout << "The total is $" << total << endl;
    return 0;
}
~~~

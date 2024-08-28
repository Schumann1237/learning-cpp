## Overflow and Underflow
When a variable is assigned a value that is too large or twoo small in range for that variable's data type, the variable overflows or underflows.
~~~cpp
// This program demonstrates integer overflow and underflow
#include <iostream>
using namespace std;

int main()
{
    // testVar is initialised with the maximum value for a short.
    short testVar = 32767;

    // Display testVar
    cout << testVar << endl;

    // Add 1 to testVar to make it overflow
    testVar = testVar + 1;
    cout << testVar << endl;

    // Subtract 1 from testVar to make it underflow
    testVar = testVar - 1;
    cout << testVar << endl;
    return 0;
}
~~~
~~~
32767
-32768
32767
~~~
Typically, when an integer overflows, its contents wrap around to that data type's lowest possible value. In program 3-7, *testVar* wrapped around from 32,767 to -32,768 when 1 was added to it. When 1 was subtracted from *testVar*, it underflowed, which caused its contents to wrap back around to 32,767. No warning or error message is given.

When floating point variables overflow or underflow, the results depend upon how the compiler is configured. 
- Produces an incorrect result and continues running
- Prints an error message and immediately stops when either floating point overflow or underflow occurs.
- Prints an error message and immediately stops when floating point overflow occurs, but stores a 0 in the variable when it underflows.
- Gives you a choice of behaviours when overflow or underflow occurs.

~~~cpp
// This program can be used to see how your system handles
// floating point overflow and underflow
#include <iostream>
using namespace std;

int main()
{
    float test;

    test = 2.0e38 * 1000; // should overflow test
    cout << test << endl;
    test = 2.0e-38 / 2.0e38;
    cout << test << endl;
    return 0;
}
~~~

## Type Casting
A *type cast expression* lets you manually promote or demote a value. The general format of a type cast expression is 
~~~
static_cast<DataType>(Value)
~~~
where *Value* is a variable or literal value that you wish to convert and *DataType* is the data type you wish to convert *Value* to. 
~~~cpp
double number = 3.7;
int val;
val = static_cast<int>(number);
~~~
The type cast expression in the third statement returns a copy of the value in number, converted to an *int*.

Type cast expressions are useful in situations where C++ will not perform the desired conversion automatically. 

~~~cpp
// This program uses a type cast to avoid integer division.
#include <iostream>
using namespace std;

int main()
{
    int books;  // Number of books to read
    int months; // Number of months spent reading
    double perMonth;    // Average number of books per month

    cout << "How many books do you plan to read? ";
    cin >> books;
    cout << "How many months will it take you to read them? ";
    cin >> months;
    perMonth = static_cast<double>(books) / months;
    cout << "That is " << perMonth << " books per month.\n";
    return 0;
}
~~~
~~~md
How many books do you plan to read? _**30 [ENTER]**_
How many months will it take you to read them? _**7 [ENTER]**_
That is 4.28571 books per month.
~~~

~~~cpp
// This program uses a type cast expression to print a character
// from a number.
#include <iostream>
using namespace std;

int main()
{
    int number = 65;

    // Display the value of the number variable.
    cout << number << endl;

    // Display the value of number converted to
    // the char data type.
    cout << static_cast<char>(number) << endl;
    return 0;
}
~~~
~~~
65
A
~~~
Refer to _**typecast.cpp**_

## Multiple Assignment and Combined Assignment
C++ allows you to assign a value to multiple variables at once, such as:
~~~cpp
a = b = c = d = 12;
~~~
The assignment operator works from right to left. 12 is first assigned to d, then to c, then to b, then to a.

### Combined Assignment Operators
~~~cpp
number = number + 1;
~~~
The expression on the right side of the assignment operator gives the value of number plus 1. Similarly, 
~~~cpp
number = number - 5;
~~~
gives the value of number minus 5.

These two statements can be compounded with *compounded operators*, for example:
~~~cpp
number += 1;
number -= 5;
~~~

## Formatting Output
The way a value is printed is called its *formatting.* The *cout* object has a standard way of formatting variables of each data type. Consider this program:
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    int num1 = 2897, num2 = 5, num3 = 837,
        num4 = 34, num5 = 7, num6 = 1623,
        num7 = 390, num8 = 3456, num9 = 12;
    
    // Display the first row of numbers
    cout << num1 << " " << num2 << " " << num3 << endl;
    
    // Display the second row of numbers
    cout << num4 << " " << num5 << " " << num6 << endl;
    
    // Display the third row of numbers
    cout << num7 << " " << num8 << " " << num9 << endl;
    return 0;
}
~~~
~~~
2897 5 837
34 7 1623
390 3456 12
~~~

Unfortunately, the numbers do not line up in columns. This is because some of the numbers, such as 5 and 7, occupy one position, occupy one position on the screen, while others occupy two or three positions *cout* uses just the number of spaces needed to print each number. 

To remedy this, a stream manipulator, *setw*, can be used to establish print fields of a specified width:
~~~cpp
    value = 23;
    cout << setw(5) << value;
~~~
The number inside the parentheses after the word *setw* specifies the *field width* for the value immediately following it. The field width is the minimum number of character positions, or spaces, on the screen to print the value in. 

~~~cpp
#include <iostream>
#include <iomanip> // Required for setw
using namespace std;

int main()
{
    int num1 = 2897, num2 = 5, num3 = 837,
        num4 = 34, num5 = 7, num6 = 1623,
        num7 = 390, num8 = 3456, num9 = 12;
    
    // Display the first row of numbers
    cout << setw(6) << num1 << setw(6)
         << num2 << setw(6) << num3 << endl;

    // Display the second row of numbers
    cout << setw(6) << num4 << setw(6)
         << num5 << setw(6) << num6 << endl;

    // Display the third row of numbers
    cout << setw(6) << num7 << setw(6)
         << num8 << setw(6) << num9 << endl;
    return 0;
}
~~~
~~~
  2897     5   837
    34     7  1623
   390  3456    12
~~~

### The *setprecision* Manipulator
The number of significant digits with which floating-point values are displayed can be controlled by using the *setprecision* manipulator. 
~~~cpp
// This program demonstrates how setprecision rounds a 
// floating point value
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double quotient, number1 = 132.364, number2 = 26.91;

    quotient = number1 / number2;
    cout << quotient << endl;
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    cout << setprecision(1) << quotient << endl;
    return 0;
}
~~~
~~~
4.91877
4.9188
4.919
4.92
4.9
5
~~~

~~~cpp
#inlude <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double day1, day2, day3, total;

    // Get the sales for each day.
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;

    total = day1 + day2 + day3;

    cout << "\nSales Figures\n";
    cout << "-------------\n";
    cout << setprecision(5);
    cout << "Day 1: " << setw(8); << day1 << endl;
    cout << "Day 2: " << setw(8); << day2 << endl;
    cout << "Day 3: " << setw(8); << day3 << endl;
    cout << "Total: " << setw(8); << total << endl;
    return 0;
}
~~~
~~~md
Enter the sales for day 1: _**321.57 [ENTER]**_
Enter the sales for day 2: _**269.92 [ENTER]**_
Enter the sales for day 3: _**307.77 [ENTER]**_

Sales Figures
-------------
Day 1: 321.57
Day 2: 269.62
Day 3: 307.77
Total: 898.96
~~~

### The *fixed* Manipulator
Another stream manipulator, *fixed*, forces cout to print the digits in *fixed-point notation*, or decimal.
~~~cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double day1, day2, day3, total;

    // Get the sales for each day
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;
    
    total = day1 + day2 + day3;

    cout << "\nSales Figures\n";
    cout << "-------------\n"
    cout << setprecision(2) << fixed;
    cout << "Day 1: " << setw(8) << day1 << endl;
    cout << "Day 2: " << setw(8) << day2 << endl;
    cout << "Day 3: " << setw(8) << day3 << endl;
    cout << "Total: " << setw(8) << total << endl;
    return 0;
}
~~~
~~~md
Enter the sales for day 1: _**1321.87**_ [ENTER]
Enter the sales for day 2: _**1869.26**_ [ENTER]
Enter the sales for day 3: _**1403.77**_ [ENTER]

Sales Figures
-------------
Day 1:  1321.87
Day 2:  1869.26
Day 3:  1403.77
Total:  4594.90
~~~

### The *showpoint* Manipulator
By default, floating-point numbers are not displayed with trailing zeroes, and floating-point numbers that do not have a fractional part are not displayed with a decimal point.

~~~cpp
    double x = 123.4, y = 456.0;
    cout << setprecision(6) << x << endl;
    cout << y << endl;
~~~

The cout statement will produce:
~~~cpp
    123.4
    456
~~~
Althought six significant digits are specified are both numbers, neither number is displayed with trailing zeroes. If we want the numbers padded with trailing zeroes, we must use the *showpoint* manipulator as shown:
~~~cpp
    double x = 123.4, y = 456.0;
    cout << setprecision(6) << showpoint << x << endl;
    cout << y << endl;
~~~
The *cout* statements will produce the following output.
~~~cpp
    123.400
    456.000
~~~

### The *left* and *right* Manipulators
Normally output is right justified. For example:
~~~cpp
    double x = 146.789, y = 24.2, z = 1.783;
    cout << setw(10) << x << endl;
    cout << setw(10) << y << endl;
    cout << setw(10) << z << endl;
~~~
~~~cpp
146.789
   24.2
  1.783
~~~
Tp cause the values to be left-justified, use the *left* manipulator, as shown in the following:
~~~cpp
    double x = 146.789, y = 24.2, z = 1.783;
    cout << left << setw(10) << x << endl;
    cout << setw(10) << y << endl;
    cout << setw(10) << z << endl;
~~~
~~~cpp
146.789   
24.2      
1.783 
~~~

To recap:
|Stream Manipulator|Description|
|---|---|
|setw(n)| Establishes a print field of n spaces|
|fixed|Displays floating point numbers in fixed point notation|
|showpoint|Causes a decimal point and trailing zeroes to be displayed, even if there is no fractional part.|
|setprecision(n)|Sets the precision of floating point numbers.
|left|Causes subsequent output to be left justified.|
|right|Causes subsequent output to be right justified|

Refer to _**format.cpp**_

## Working with Characters and *string* Objects

When *cin* reads input, it passes over and ignores any leading *whitespace* characters (spaces, tabs, or line breaks). Once it comes to the first non-blank character and starts reading, it stops reading when it gets to the next whitespace character.
~~~cpp
// This program illustrates a problem that can occur if cin is used
// to read character data into a string object
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string city;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Enter the city you live in: ";
    cin >> city;
    cout << "Hello, " << name << endl;
    cout << "You live in ": << city << endl; 
    return 0;
}
~~~
~~~md
Please enter your name: _**Kate Smith [ENTER]**_
Enter the city you live in: Hello, Kate
You live in Smith
~~~
To work around this problem, you can use a C++ function named *getline*. The *getline* function reads an entire line, including leading and embedded spaces, and stores it in a *string* object. 
~~~cpp
// This program demonstrates using the getline function
// to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string city;

    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Enter the city you live in: ";
    getline(cin, city);

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    return 0;
}
~~~
~~~md
Please enter your name: _**Kate Smith [ENTER]**_
Enter the city you live in: _**Raleigh [ENTER]**_
Hello, Kate Smith
You live in Raleigh
~~~

### Inputting a Character
~~~cpp
// This program reads a single character into a char variable.
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Type a character and press Enter: ";
    cin >> ch;
    cout << "You entered " << ch << endl;
    return 0;
}
~~~

### Using *cin.get*

Programs that use cin >> to read input will not continue past the cin statement until some character other than the spacebar, tab key, or [ENTER] key has been pressed. 

In situations where necessary, the cin object has a *member function* named *get*.
~~~cpp
#include <iostream> 
using namespace std;

int main()
{
    char ch;

    cout << "This program has paused. Press enter to continue.";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again.">>
    ch = cin.get();
    cout << "It has paused a third time. Please press Enter again.";
    cin.get();
    cout << "Thank you."
    return 0;
}
~~~
~~~md
This program has paused. Press Enter to continue. _**[ENTER]**_
It has paused a second time. Please press Enter again. _**[ENTER]**_
It has paused a third time. Please press Enter again. _**[ENTER]**_
Thank you.
~~~

### Mixing *cin >>* and *cin.get**
~~~cpp
// This program demonstrates a problem that occurs
// when you mix cin >> with cin.get()
#include <iostream>
using namepsace std;

int main()
{
    char ch;    // Define an character variable 
    int number; // Define an integer variable

    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a character: "; 
    ch = cin.get();
    cout << "Thank you!\n";
    return 0;
}
~~~
~~~md
Enter a number: 100 [ENTER]
Enter a character : Thank you!
~~~

### Using *cin.ignore*
In general form:
~~~cpp
cin.ignore(n,c);
~~~
The arguments shown in the parentheses are optional. If used, n is an integer and c is a character. They tell cin to skip n number of characters, or until the character c is encountered. For example, the following statement causes cin to skip the next 20 characters or until a newline is encountered, whichever comes first:
~~~cpp
cin.ignore(20,'\n')
~~~
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cin.ignore();
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank you!\n";
    return 0;
}
~~~

### *string* Member Functions and Operators
C++ String objects also have a number of member functions. For example, to know the length of the string that is stored in a *string* object, you can call the object's *length* member function. 
~~~cpp
string state = "Texas";
int size = state.length()   // size = 5
~~~

Certain operators also work with *string* objects. One of them is the + operator. Because strings cannot be added, when this operator is used with string operads it *concatenates* in a program.
~~~cpp
string greeting1 = "Hello ";
string greeting2;
string name1 = "World";
string name2 = "People";
~~~
~~~cpp
greeting2 = greeting1 + name1; // greeting1 now holds "Hello World"
greeting2 = greeting1 + name2; // greeting1 now holds "Hello People"
~~~

### More Mathematical Library Functions
The C++ runtime library provides several functions for performing complex mathematical operations

|Function|Example|Description|
|---|---|---|
|abs|y = abs(x);|Returns the absolute value of the argument.|
|cos|y = cos(x);|Returns the cosine of the argument. The argument should be an angle expressed in radians.
|exp|y = exp(x);|Computes the exponential function of the argument, which is x. The return type and the argument are doubles.|
|fmod|y = fmod(x, x);|Returns, as a double, the remainder of the first argument divided by the second argument. Works like the modulus operator, but the arguments are doubles. (The modulus operator only works with integers.)|
|log|y = log(x);|Returns the natural logarithm of the argument. The return type and the argument are doubles.|
|log10|y = log10(x);|Returns the base-10 logarithm of the argument. The return type and the argument are doubles.|
|sin|y = sin(x);|Returns the sine of the argument. The argument should be an angle expressed in radians. The return type and the argument are doubles.|
|sqrt|y = sqrt(x);|Returns the square root of the argument. The return type and argument are doubles.\
|tan|y = tan(x);|Returns the tangent of the argument. The argument should be an angle expressed in radians. The return type and the argument are doubles.|

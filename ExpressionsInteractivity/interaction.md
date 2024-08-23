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
## Mathematical Expressions
Program below shows how mathematical expressions can be used with the cout object.
~~~cpp
// This program asks the user to enter the numerator
// and denominator of a fraction and it displays the decimal value
#include <iostream>
using namespace std;

int main()
{
    double numerator, denominator;

    cout << "This program shows the decimal value of ";
    cout << "a fraction.\n";
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cout << (numerator / denominator) << endl;
    return 0;
}
~~~
~~~md
This program shows the decimal value of a fraction.
Enter the numerator: **3 [ENTER]**
Enter the denominator: **16 [ENTER]**
The decimal value is 0.1875
~~~

### No Exponents Please!
Operations involving exponents require the use of a *library function*. One of the library functions is called *pow*. Here is an example of its usage.
~~~cpp
// This program calculates the area of a circle.
// The formula for the area of a circle is pi times
// the radius squared. Pi is 3.14159
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    const double PI = 3.14159
    double area, radius;

    cout << "This program calculates the area of a circle.\n";
    cout << "What is the radius of the circle? ";
    cin >> radius;
    area = PI * pow(radius, 2.0);
    cout << "The area is " << area << endl;
    return 0;
}
~~~
~~~md
This program calculates the area of a circle.
What is the radius of the circle? **10 [ENTER]**
The area is 314.159
~~~
Refer to _**average.cpp**_

## When You Mix Apples and Oranges: Type Conversion
When an operator's operands are of different data types, C++ will automatically convert them to the same data type. This can affect the results of mathematical expressions.

Data types can be ranked from highest to lowest:
~~~
long double
double
float 
unsigned long
long
unsigned int
int
~~~
C++ strives to convert the operands to the same type via *type coercion.* To promote a value is to convert a value to a higher data type, and to demote a value is the opposite.

#### Rule 1: *chars, shorts*, and *unsigned shorts* are automatically promoted to *int*.
~~~cpp
#include <iostream>

int main() {
    char c = 5;                // char type
    short s = 10;              // short type
    unsigned short us = 15;    // unsigned short type

    // All variables will be promoted to int before the addition
    int result = c + s + us;

    std::cout << "Result: " << result << std::endl;

    return 0;
}
~~~

#### Rule 2: When an operator works with two values of different data types, the lower-ranking value is promoted to the type of the higher-ranking value. 
Assume years is an *int* and *interestRate* is a *float*;
~~~cpp
years = interestRate
~~~

#### Rule 3: When the final value of an expression is assigned to a variable, it will be converted to the data type of that variable.
Assume *area* is a *long int*, while *length* and *width* are both *int*:
~~~cpp
area = length * width*
~~~
Here, only the result of the mathematical expression will be converted to *long*.
~~~cpp
int x, y = 4;
float z = 2.7;
x = y * z
~~~
In the expression y * z, y will be promoted to float and 10,8 will result from the multiplication. Since x is an integer, however, 10.8 will be truncated and 10 will be stored in x.

### Integer Division
When you divide an integer by another integer, the result is always an integer. 
~~~cpp
double parts;
parts = 15 / 6; // output = 2
~~~
For a division operation to return a floating-point value, at least one of the operands must be a floating-point data type. 
~~~cpp
double parts;
parts = 15.0 / 6; // 2.5 is assigned to parts
~~~
The literal value 15.0 is interpreted as a floating-point number, so the division operation will return a floating-point number. 
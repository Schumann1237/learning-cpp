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

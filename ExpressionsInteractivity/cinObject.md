## The *cin* Object
Just as cout is C++'s standard output object, cin is the standard input object. It reads input from the console (or keyboard).
~~~cpp
// This program asks the user to enter the length and width of a rectangle
// It calculates the rectangle's area and displays the value on the screen.
#include <iostream>
using namespace std;

int main()
{
    int length, width, area;

    cout << "This program calculates the area of a "; 
    cout << "rectangle.\n";
    cout << "What is the length of the rectangle? ";
    cin >> length;
    cout << "What is the width of the rectangle? ";
    cin >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << ".\n";
    return 0;
}
~~~
~~~md
This program calculates the area of a rectangle.
What is the length of the rectangle? **10 [ENTER]**
What is the width of the rectangle? **2 [ENTER]**
The area of the rectangle is 200.
~~~

The *cin* object may be used to gather multiple values at once. 
~~~cpp
/// A modified version of the previous program
#include <iostream>
using namespace std;

int main()
{
    int length, width, area;

    cout << "This program calculates the area of a ";
    cout << "rectangle.\n";
    cout << "Enter the length and width of the rectangle ";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;
    return 0;
}
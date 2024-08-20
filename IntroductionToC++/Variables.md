## Variables
~~~cpp
int number;
~~~
This is called a *variable definition*. It tells the compiler the variable's name and the type of data it will hold. This indicates the variable's name is number. The word int stands for integer, so *number* will only be used to hold integer.
~~~cpp
// This program has a variable
#include <iostream>
using namepsace std;

int main()
{
    int number;

    number = 5;
    cout << "The value in number is " << number << endl;
    return 0;
}
~~~
~~~
The value in number is 5
~~~
~~~cpp
// This program has a variable.
#include <iostream>
using namespace std;

int main() 
{
    int number;

    number = 5;
    cout << "The value in number is << "number" << endl;
    return 0;
}
~~~
~~~
The value in number is number
~~~
Notice how the quotation marks can turn a variable into a string literal.


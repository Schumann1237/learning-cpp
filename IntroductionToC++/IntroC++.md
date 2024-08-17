## The Parts of a C++ Program
~~~cpp
// A simple C++ program
#include <iostream>
using namespace std;

int main()
{
    cout << "Programming is great fun!";
    return 0;
}
~~~
~~~
Programming is great fun!
~~~
---
~~~cpp
// A simple C++ program
~~~
The // marks the beginning of a *comment. The compilar ignores everything from the double slash to the end of the line. Comments are used to help explain what's going on.
~~~cpp 
#include <iostream>
~~~
Because this line starts with a #, it is called a *preprocessor directive*. This sets up your source code for the compiler.

This directive causes the preprocessor to include the contents of another file named *iostream* in the program. The iostream file is called a header file, so it should be included at the top of the program. It allows a C++ program to display output and read input.
~~~cpp
using namespace std;
~~~


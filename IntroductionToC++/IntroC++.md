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
Programs usually contain several items with unique names. Variables, functions, and objects are examples of program entities that must have names. C++ uses *namespace* to organise the names of program entities. The statement declares that the program will be accessing entities whose names are part of the namespace called **std**.

~~~cpp
int main()
~~~
This marks the beginning of a function, which is a group of one or more programming statements that collectively has a name. The name of this function is **main**. The word **int** stands for "integer". It indicates that the function sends an integer value back to the operating system when it is finished executing.

~~~cpp
{
~~~
This is called an opening brace and it marks the beginning of the function.
~~~cpp
    cout << "Programming is great fun!";
~~~
This line displays a message on the screen. In programming terms, the group of characters inside " " is called a *string literal* or *string constant*

At the end of the line is a semicolon, which marks the end of a complete statement in C++.
~~~cpp
    return 0;
~~~
This sends the integer value 0 back to the operating system upon the program's completion. The value 0 usually indictes that a program executed successfully.
~~~cpp
}
~~~
The closing brace marks the end of the function.

|Character|Name|Description|
|---|---|---|
|//|Double Slash|Marks the beginning of a comment|
|#|Pound Sign|Marks the beginning of a preprocessor directive
|< >|Opening and closing brackets|Encloses a filename when used with the **#include** directive|
|(  )|Opening and closing parentheses|Used in naming a function, as in **int main()**|
|{ }|Opening and closing braces|Encloses a group of statements, such as the contents of a function.|
|" "|Opening and closing quotation marks|Encloses a string of characters, such as a message that is to be printed on the screen.|
|;|Semicolon|Marks the end of a complete programming statement.|





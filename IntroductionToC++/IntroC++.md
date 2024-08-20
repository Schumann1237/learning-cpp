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

## The *cout* object
*cout* is classified as a *stream object*, which means it works with streams of data. When the << su,bl is used this way, it is called the *stream insertion operator.* 

~~~cpp
// A simple C++ program
#include <iostream>
using namespace std;

int main()
{
    cout << "Programming is ";
    cout << "great fun!";
    return 0; 
}
~~~
~~~
Programming is great fun!
~~~
~~~cpp
// An unruly printing program
#include <iostream>
using namespace std;

int main()
{
    cout << "The following items were top sellers" << endl;
    cout << "during the month of June:" << endl;
    cout << "Computer games" << endl;
    cout << "Coffee" << endl;
    cout << "Aspirin" << endl;
    return 0;
}
~~~
~~~
The following items were top sellers
during the month of June:
Computer games
Coffee
Aspirin
~~~
Notice how the *<< endl;* statement is used as a *stream manipulator* to advance the output to the beginning of the next line for subsequent printing.
~~~cpp
// Yet another well-adjusted printing program
#include <iostream>
using namespace std;

int main()
{
    cout << "The following items were top sellers\n";
    cout << "during the month of June:\n";
    cout << "Computer games\nCoffee";
    cout << "\nAspirin\n";
    return 0;
}
~~~
~~~
The following items were top sellers
during the month of June:
Computer games
Coffee Aspirin
~~~
The *newline escape sequence* is \n. When cout encounters \n in a string, it doesn't print it on the screen, but interprets it as a special command to advance the output cursor to the next line. 
|Escape sequences|Name|Description|
|---|---|---|
|\n|Newline|Causes the cursor to go to the next line for subsequent printing|
|\t|Horizontal tab|Causes the cursor to skip over to the next tab stop|
|\a|Alarm|Causes the computer to beep.|
|\b|Backspace|Causes the cursor to back up, or move left one position|
|\r|Return|Causes the cursor to go to the beginning of the current line, not the next line|
| \ | Backslash|Causes a backlash to be printed|
|'| Single quote|Causes a single quotation mark to be printed.|
|"|Double quote| Causes a double quotation mark to be printed.|

## The *#include* Directive
The header file iostream must be included in any program that uses the cout object. This is because cout is not part of the "core" of the C++ language. Specifically, it is part of the *input-output stream library*. 


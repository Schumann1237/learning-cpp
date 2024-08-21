# Variables
~~~cpp
int number;
~~~
This is called a *variable definition*. It tells the compiler the variable's name and the type of data it will hold. This indicates the variable's name is number. The word int stands for integer, so *number* will only be used to hold integer.
~~~cpp
// This program has a variable
#include <iostream>
using namespace std;

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

## Identifiers
An *identifier* is a programmer-defined name that represents some element of a program. Variable names are examples of identifiers. You may choose your own variable ames in C++, as long as you do not use any of the C++ *key words*. The key words make up the "core" of the language and have specific purposes. 

## Legal Identifiers
Some specific fules that must be followed with all identifiers.

|Variable Name|Legal or Illegal|
|---|---|
|dayOfWeek|Legal|
|3dGraph|Illegal. Variable names cannot begin with a digit|
|_employee_num|Legal|
|June1997|Legal.|
|Mixture#3|Illegal. Variable names may only use letters, digits, or underscores|

## Integer Data Types
|Data Type|Typical Size|Typical Range|
|---|---|---|
|short int| 2 bytes|-32,768 to +32,768|
|unsigned short int|2 bytes|0 to +65,535
|int|4 bytes|-2,147,483,648 to +2,147,483,648|
|unsigned int|4 bytes|0 to 4,294,967,295|
|long int|4 bytes|-2,147,483,648 to +2,147,483,648|
|unsigned long int|4 bytes|0 to 4,294,967,295|
|long long int|8 bytes|-9,223,372,036,854,775,808 to +9,223,372,036,854,775,808|
unsigned long long int|8 bytes| 0 to 18,446,744,073,709,551,615|

~~~cpp
// This program has variables of several of the integer types
#include <iostream>
using namespace std;

int main()
{
    int checking;
    unsigned int miles;
    long days;

    checking = -20;
    miles = 4276U;
    days = 189000L;
    cout << "We have made a long journey of " << miles;
    cout << "miles.\n";
    cout << "Our checking account balance is " << checking;
    cout << " \nAbout " << days << " days ago Columbus ";
    cout << "stood on this spot.\n";
    return 0;
}
~~~
~~~
We have made a long journey of 4276 miles.
Our checking account balance is -20
About 189000 days ago Columbus stood on this spot.
~~~

## Integer and Long Integer Literals

In C++, if a numeric literal is an integer (not written with a decimal point) and it fits within the range of an int, then the numeric literal is treated as an int. A numeric literal that is treated as an int is called an *integer literal*. 

If you want an integer literal to be treated as a *long long int*, you can appent *LL* at the end of the number.
~~~
long long amount;
amount = 32LL;
~~~

### Hexadecimal and Octal Literals
Hexadecimal (base 16) and octal (base 8) are popular because they make certain programming tasks more convenient than decimal numbers do.

By default, C++ assumes that all integer literals are expressed in decimal. You express hexadecimal numbers by placing 0x in front of them. Here is how the hexadecimal number F4 would be expressed in C++:
~~~
0xF4
~~~
Octal numbers must be preceded by a 0. For example, the octal 31 would be written 
~~~
031
~~~

## The *char* Data Type
Used to store individual characters. A variable of this data type can hold only one character at a time.
~~~
    char letter;
    letter = 'g';
~~~
An example using ASCII characters.
~~~cpp
// This program demonstrates the close relationship between
// characters and integers. ASCII characters are used.
#include <iostream>
using namespace std;

int main()
{
    char letter;

    letter = 65;
    cout << letter << endl;
    letter = 66;
    cout << letter << endl;
    return 0;
}
~~~
~~~
A
B
~~~

Because char variables are only large enough to hold one character, you cannot assign string literals to them.
~~~cpp
char letter;
letter = 'A'; // This will work;
letter = "A"; // This will not work;
~~~

Some important things before moving on:
- Printable characters are internally represented by numeric codes. Most computers use ASCII codes for this purpose.
- Characters normally occupy a single byte of memory.
- Strings are consecutive sequences of characters that occupy consecutive bytes of memory.
- String literals are always stored in memory with a null terminator at the end. This marks the end of the string.
- Character literals are enclosed in single quotation marks.
- String literals are enclosed in double quotation marks.
- Escape sequences such as '\n' are stored internally as a single character.
  
## The *string* Class
The first step in using the *string* class is to #include the *string* header file. 
~~~cpp
// This program demonstrates the string class.
#include <iostream>
#include <string> // Required for the string class.
using namespace std;

int main()
{
    string movieTitle;

    movieTitle = "Wheels of Fury";
    cout << "My favourite movie is " << movieTitle << endl;
    return 0;
}
~~~
~~~
My favourite movie is Wheels of Fury
~~~

## Floating-Point Data Types
Internally, floating-point numbers are stored in a manner similar to scientific notation. Take the number 47,281.97. In scientific notation this number is 4.728197 x 10<sup>4</sup>.

Computers typically use *E notation* to represent floating-point values. in E notation, the number 47,281.97 would be 4.728197E4. 

In C++, there are three data types that can represent floating-point numbers. They are 
~~~
float
double
long double
~~~
|Data Type|Key Word|Description|
|---|---|---|
|Single precision|float|4 bytes. Numbers between ±3.4E-38 and ±3.4E38|
|Double precision|double|8 bytes Numbers between ±1.7E-308 and ±1.7E308|
|Long double precision|long double|8 bytes. Numbers between ±1.7E-308 and ±1.7E308. Some compilers use 10 bytes for long doubles. This allows a range of ±3.4E-4932 to ±1.1E4832|

## Floating Point Literals
~~~cpp
// This program uses floating point data types.
#include <iostream>
using namespace std;

int main()
{
    float distance;
    double mass;

    distance = 1.495979E11F;
    mass = 1.989E30F;
    cout << "The Sun is " << distance << " meters away.\n";
    cout << "The Sun's mass is " << mass << " kilograms.\n";
    return 0;
}
~~~
If you want to force a value to be stored as a *long double*, append an L:
~~~
1034.56L
89.2l
~~~

## Assigning Floating-Point Values to Integer Variables
When a floating-point value is assigned to an integer variable, the fractional part of the value (the part after the decimal point) is discarded.
~~~cpp
int number;
number = 7.5; // Assigneds 7 to number
~~~
When part of a value is discarded, it is said to be *truncated*.

## The *bool* Data Type
Bool data type allows you to create small integer variables that are suitable for holding true or false values.
~~~cpp
// This program demonstrates boolean variables.
#include <iostream>
using namespace std;

int main()
{
    bool boolValue;

    boolValue = true;
    cout << boolValue << endl;
    boolValue = false;
    cout << boolValue << endl;
    return 0;
}
~~~
~~~
1
0
~~~

## Determining the Size of a Data Type
A special operator called *sizeof* will report the number of bytes of memory used by any data type or variable.
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    long double apple;

    cout << "The size of an integer is " << sizeof(int);
    cout << " bytes.\n";
    cout << "The size of a long integer is " << sizeof(long);
    cout << "An apple can be eaten in " << sizeof(apple);
    cout << " bytes!\n";
    return 0;
}
~~~
~~~
The size of an integer is 4 bytes.
The size of a long integer is 4 bytes.
An apple can be eaten in 8 bytes.
~~~

## Variable Assignments and Initialisation 
The = symbol is called the *assignment operator*. Operators perform operations on data. The data that operators work with are called *operands.*

In C++, the operand on the left side must be an *lvalue* and the operand on the right side must be an *rvalue*. The assignment statement takes the r value and puts it in the memory location of the object identified by the lvalue.

You may also assign values to variables as part of the definition. This is called *initialisation*.

### Declaring Variables With the *auto* Key Word
C++ 11 introduces an alternative way to define variables, using the auto key word and an initialisation value:
~~~cpp
auto amount = 100; // integer
auto interestRate = 12.0; // double
auto customerNum = 459L; // long
auto stockCode = 'D' // char
~~~

## Scope
~~~cpp
// This program can't find its variable
#include <iostream>
using namespace std;

int main()
{
    cout <<value; // ERROR! value not defined yet!

    int value = 100;
    return 0;
}
~~~
The program will not work because line 7 attempts to send the contents of the variable value to cout before the variable is defined. The compiler reads your program from top to bottom. To correct the program, the variable definition must be put before any statement that uses it.

## Arithmetic Operators

Generally there are three types of operators: unary, binary, and ternary. these terms reflect the number of operands an operator requires.

Unary operators only require a single operand. Binary operators require two operands. Ternary operators require three operands.

~~~cpp
// This program calculates hourly wages, including overtime.
#include <iostream>
using namespace std;

int main()
{
    double regularWages, basePayRate = 18.25, regularHours = 40.0, overtimeWages, overtimePayRate = 27.78, overtimeHours = 10, total wages;
    
    regularWages = basePayRate * regularHours
    overtimeWages = overtimePayRate * overtimeHours;
    totalWages = regularWages + overtimeWages;

    cout << "Wages for this week are $" << totalWages << endl;
    return 0;
}
~~~
~~~
Wages for this week are 1007.8
~~~

## Comments

~~~cpp
// this is single-line comments

/*
    this is a multi-line comment
*/
~~~

## Named Constants 
~~~cpp
// This program calculates the circumference of a circle.
#include <iostream>
using namespace std;

int main()
{
    //Constants
    const double PI = 3.14159;
    const double DIAMETER = 10.0;

    // Variable to hold the circumference
    double circumference;

    // calculate the circumference
    circumference = PI * DIAMETER
    
    // Display the circumference
    cout << "The circumference is: " << circumference << endl;
    return 0;
}   
~~~
~~~
The circumference is: 31.4159
~~~

## Programming Style
Programming style refers to the way source code is visually arranged. Ideally, it is a consistent method of putting spaces and indentions in a program so visual cues are created.


## What is a Program Made of?

### Language Elements
All programming languages have a few things in common

|Language Element| Description|
|---|---|
|Key Words|Words that have a special meaning. Key words may only be used for their intended purpose. Ley words are also known as reserved words.|
|Programmer-Defined Identifiers|Words or names defined by the programmer. They are symbolic names that refer to variables or programming routines.|
|Operators|Operators perform operations on one or more operands. An operand is usually a piece of data, like a number.|
|Punctuation|Punctuation characters that mark the beginning or ending of a statement of separate items in a list.|
|Syntax|Rules that must be followed when constructing a program. Syntax dictates how key words and operators may be used, and where punctuation symbols must appear.|

~~~cpp
This program calculates the user's pay
#include <iostream>
using namespace std;

int main ()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
} 
~~~
#### Key Words (Reserved Words)
Three of C++'s key words appear on lines 3 and 5: *using, namepsace,* and *int*. The word double, which appears on line 7, is also a C++ key word. Key words in C++ are always in lowercase. Key words are reserved and cannot be used for anything other than their designated purposes.

#### Programmer-Defined Identifiers
The words *hours, rate,* and *pay* that appear in the program on lines 7, 11, 15, 18, and 21 are programmer-defined identifiers. They are not part of the C++ language but rather are names made up by the programmer. In this particular program, these are the names of variables.

#### Operators
On line 18 the following code appears:
~~~
pay = hours * rate;
~~~
The = and * symbols are both operators. They perform operations on pieces of data known as operands. The * operator multiplies its two operands, which in this example are the variables *hours* and *rate*.

#### Punctuation
Notice that lines 3, 7, 10, 11, 14, 15, 18, 21, and 22 all end with a semicolon. A semicolon in C++ is similar to a period in English. Part of larning C++ is learning where to place semicolons and other punctuation symbols.

### Lines and Statements
The contents of a program are thought of in terms of lines and statements.. A "line" is just a single line as it appears in the body of a program. 

A statement is a complete instruction that causes the computer to perform some action.

### Variables
A variable is a named storage location in the computer's memory for holding a piece of information. 

Variables are symbolic names that represent locations in the computer's random-access memory (RAM). When information is stored in a variable, it is actually stored in RAM. 

### Variable Definitions
In programming, there are two general types of data: numbers and characters. 

Numeric data can be categorised even further. For instance, the following are all whole numbers, or integers:
~~~
5
7
-129
32154
~~~
The following are real, or floating-point numbers:
~~~ 
3.14159
6.7
1.0002
~~~
At line 7 of the program:
~~~
double hours, rate, pay;
~~~
The word double in this statement indicates that the variables *hours, rate,* and *pay* will be used to hold double precision floating-point numbers. This statement is called a *variable definition*.

## Input, Processing, and Output
Computer programs typically perform a three-step process of gathering input, performing some process on the information gathered, and then producing output. Input is information a program collects from the outside world. It can be sent to the program from the user, who is entering data at the keyboard or using the mouse. It can also be read from disk files or hardware devices connected to the computer. 

Lines 11 and 15 use the cin (pronounced "see in") object to perform these input-operations.
~~~cpp
    cin >> hours;
    cin >> rate;
~~~
Once information is gathered from the outside world, a program usually processes it in some manner.
~~~cpp
    pay = hours * rate 
~~~
Output is information that a program sends to the outside world. It can be words or graphics displayed on a screen, a report sent to the printer, data stored in a file, or information sent to any device connected to the computer. Lines 10, 14, and 21 all perform output:
~~~cpp
    cout << "How many hours did you work? ";
    cout << "How much do you get paid per hour? ";
    cout << "You have earned $" << pay << endl;
~~~

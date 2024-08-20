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

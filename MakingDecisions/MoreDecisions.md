## Comparing Characters and Strings
### ASCII Values of Commonly Used Characters
|Character|ASCII Value|
|---|---|
|'0' - '9'| 48-57|
|'A' - 'Z'| 65-90|
|'a' - 'z'|97-122|
|blank|32|
|period|46|

When two characters are compared, it is actually their ASCII values that are being compared. 
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    char ch;

    // Get a character from the user.
    cout << "Enter a digit or a letter: ";
    ch = cin.get();

    // Determine what the user entered.
    if (ch >= '0' ** ch <= '9')
        cout << "You entered a digit.\n";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "You entered an uppercase letter.\n";
    else if (ch >= 'a' && ch <= 'z')
        cout << "You entered a lowercase letter.\n";
    else
        cout << "That is not a digit or a letter.\n";
    return 0;
}
~~~
~~~md
Enter a digit or a letter : _**t [ENTER]**_
You entered a lowercase letter.
~~~
~~~md
Enter a digit or a letter: _**V [ENTER]**_
You entered an uppercase letter.
~~~
~~~md
Enter a digit or a letter: _**5 [ENTER]**_
You entered a digit.
~~~
~~~md
Enter a digit or a letter: _**& [ENTER]**_
That is not a digit or a letter.
~~~

### Comparing string Objects
String objects can also be compared with relational operators. As with individual character, it is usually the ASCII value of the characters making up the strings that are being compared. For example:
~~~py
string str1 = "ABC";
string str2 = "XYZ";
~~~
The string object str1 is considered less than the string object str2 because the characters "ABC" alphabetically precede (have lower ASCII values than) the characters "XYZ". So the following if statement will cause the message "str1 is less than str2" to be displayed on the screen
~~~cpp
if (str1 < str2)
    cout << "str1 is less than str2.";
~~~
One by one, each character in the first operand is compared with the character in the corresponding position in the second operand. If all the characters in both string objects match, the two strings are equal. Other relationships can be determined if two characters in corresponding positions do not match. The first operand is less than the second operand if the first mismatched character in the first operand is less than its counterpart in the second operand. Likewise, the first operand is greater than the second operand if the first mismatched character in the first operand is greater than its counterpart in the second operand.
~~~cpp
string name1 = "Mary";
string name2 = "Mark";
~~~
The value in name1, "Mary", is greater than the value in name2, "Mark". This is because the first three characters in name1 have the same ASCII values as the first three characters in name2, but the 'y' in the fourth position of "Mary" has a greater ASCII value than the 'k' in the corresponding position of "Mark".

~~~cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double PRICE_A = 249.0, PRICE_B = 299.0;

    string partNum; //Holds a stereo part number

    // Display available parts and get the user's selection
    cout << "The stereo part numbers are:\n"
         << "Boom box: part number S-29A \n"
         << "Shelf Model: part number S-29B \n"
         << "Enter the part number of the stereo you\n"
         << "wish to purchase";
    cin >> partNum;

    // Set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Determine and display the correct price
    if (partNum == "S-29A")
        cout << "The price is $" << PRICE_A << endl;
    else if (partNum == "S-29B")
        cout << "The price is $" << PRICE_B << endl;
    else 
        cout << partNum << " is not a valid part number.\n";
    return 0;
}
~~~
~~~md
The stereo part numbers are:
Boom Box : part number S-29A
Shelf Model: part number - S-29B
Enter the part number of the stereo you 
wish to purchase: _**S-29A [ENTER]**_
The price is $249.00
~~~

## The Conditional Operator
The conditional operator provides a shorthand method of expressing a simple if/else statement. The operator consists of the question mark(?) and the colon (;). Its format is:
~~~cpp
expression ? expression : expression ;
~~~
An example:
~~~cpp
x < 0 ? y = 10 : z = 20;
~~~
The first expression x < 0 is the expression to be tested. The second expression y = 10 is executed if the first expression is true. The third expression z = 20 is executed if the first expression is false.

Since this operator takes three operands, the conditional operator is considered a _ternary_ operator.

### Using the Value of a Conditional Expression
Remember, in C++ all expressions have a value, and this includes the conditional expression. If the first sub-expression is true, the value of the conditional expression is the value of the second sub-expression. Otherwise it is the value of the third sub-expression. An example:
~~~cpp
a = x > 100 ? 0 : 1;
~~~
The value assigned to a will be either 0 or 1. This statement could be expressed as the following if/else statement.
~~~cpp
if (x > 100)
    a = 0;
else 
    a = 1;
~~~
A program that demonstrates this example.
~~~cpp
// This program calculates a consultant's charges at $50
// per hour, for a minimum of 5 hours. The ?: operator
// adjusts hours to 5 if less than 5 hours were worked
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PAY_RATE = 50.0;
    const int MIN_HOURS = 5;
    double hours, // hours worked
           charges; // total charges
    
    // Get the hours worked
    cout << "How many hours were worked?";
    cin >> hours;

    // Determine the hours to charge for.
    hours = hours < MIN_HOURS ? MIN_HOURS : hours 

    /* If the value in hours is less than 5, 
    then 5 is stored in hours. Otherwise
    hours is assigned the value it already has. The hours 
    variable will not have a value less than 5 when it 
    is used in the next statement, which calculates 
    the consultant's charges. */

    // Calculate and display the charges
    charges = PAY_RATE * hours;
    cout << fixed << showpoint << setprecision(2)
         << "The charges are $" << charges << endl;
    return 0;
}
~~~
~~~md
How many hours were worked? _**10 [ENTER]**_
The charges are $500.00
~~~
~~~md
How many hours were worked? _**2 [ENTER]**_
The charges are $250.00
~~~

## The switch Statement

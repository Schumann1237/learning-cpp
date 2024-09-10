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
The switch statement lets the value of a variable or expression determine where the program will branch.

A branch occurs when one part of a program causes another part to execute. The if/else if statement allows your program to branch into one of several possible paths. It performs a series of tests (usually relational) and branches when one of these tests is true. The switch statement is a similar mechanism, however, it tests the value of an _**integer expression**_ and then uses that value to determine which set of statements to branch to. Here is the format:
~~~cpp
switch (IntegerExpression)
{
    case ConstantExpression: /* Expression can be a variable
                                of any integer data
                                types (including chars) or an
                                expression whose value 
                                is of any of the 
                                integer data types */
        // place one or more
        // statements here
    
    cause ConstantExpression:
        // place one or more 
        // statements here
    
    // cause statements may be repeated as many
    // times as necessary

    default:
        // place one or more
        // statements here
}
~~~
The expression following the word **case** must be an integer literal or constant. It cannot be a variable, and it cannot be an expression such as x < 22 or n == 50. An **optional** default section comes after all the case statements. 

~~~cpp
#include <iostream>
using namespace std;

int main()
{
    char choice;

    cout << "Enter A, B, or C: ";
    cin >> choice;
    switch (choice)
    {
        case 'A':cout << "You entered A.\n";
                 break;
        case 'B':cout << "You entered B.\n;"
                 break;
        case 'C':cout << "You entered C.\n";
                 break;
        default: cout << "You did not enter A, B, or C!\n";
    }
    return 0;
}
~~~
~~~md
Enter A, B, or C: _**B [ENTER]**_
You entered B.
~~~
~~~md
Enter A, B, or C: _**F [ENTER]**_
You did not enter A, B, or C!
~~~
Without the **break** statement, the program "falls through" all of the statements below the one with the matching **case expression**. Sometimes this is what you want and you can use this flaw as an advantage. 

~~~cpp
#include <iostream>
using namespace std;

int main()
{
    int modelNum; // Model Number

    // Get a model number from the user.
    cout << "Our TVs come in three models:\n";
    cout << "The 100, 200, and 300. Which do you want?";
    cin >> modelNum;

    // Display the model's features.
    cout << "That model has the following features:\n";
    switch(modelNum)
    {
        case 300: cout << "\tPicture-in-a-picture.\n";
        case 200: cout << "\tStereo sound.\n";
        case 100: cout << "\tRemote control.\n";
                  break;
        default: cout << "You can only choose the 100,";
                 cout << "200, or 300.\n";
    }
    return 0;
}
~~~
~~~md
Our TVs come in three models:
The 100, 200, and 300. Which do you want? _**100 [ENTER]**_
That model has the following features:
    Remote control.
~~~
~~~md
Our TVs come in three models:
The 100, 200, and 300. Which do you want? _**200 [ENTER]**_
That model has the following features:
    Stereo sound.
    Remote control.
~~~
Another example of how useful this "fall through" capability can be is when you want the program to branch to the same set of statements for multiple **case** expressions. For instance:

~~~cpp
#include <iostream>
using namespace std;

int main()
{
    char feedGrade;

    // Get the desired grade of feed.
    cout << "Out pet food is available in three grades:\n";
    cout << "A, B, and C. Which do you want pricing for? ";
    cin >> feedGrade;

    // Display the price.
    switch(feedGrade)
    {
        case 'a': 
        case 'A': cout << "30 cents per round.\n";
                  break;
        case 'b': 
        case 'B': cout << "20 cents per pound.\n";
                  break;
        case 'c':
        case 'C': cout << "15 cents per pound.\n";
                  breal;
        default: cout << "That is an invalid choice.\n";
    }
    return 0;
}
~~~
~~~md
Our pet food is available in three grades:
A, B, and C. Which do you want pricing for? _**b [ENTER]**_
20 cents per pound.
~~~

When the user enters 'a' the corresponding case has no statements associated with it, so the program falls through to the next case, which corresponds with 'A'.
~~~cpp
case 'a':
case 'A': cout << "30 cents per pound.\n";
          break;
~~~

### Using switch in Menu Systems
~~~cpp
// This program uses a switch statement to determine
// the item selected from a menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice; // To hold a menu choice
    int months; // To hold the number of months
    double charges; // To hold the monthly charges

    // Constants for membership rates
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;
    
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // Display the menu and get a choice.
    cout << "\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n\n"
         << "Enter your choice: ";
    cin >> choice;

    // Set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Respond to the user's menu selection
    switch (choice)
    {
        case ADULT_CHOICE:
            cout << "For how many months? ";
            cin >> months;
            charges = months * ADULT;
            cout << "The total charges are $" << charges << endl;
            break;

        case CHILD_CHOICE;
            cout << "For many months? ";
            cin >> months;
            charges = months * CHILD;
            cout << "The total charges are $" << charges << endl;
            break;
        
        case SENIOR_CHOICE;
            cout << "For how many months? ";
            cin >> months;
            charges = months * SENIOR;
            cout << "The total charges are $" << charges << endl;
        
        case QUIT_CHOICE;
            cout << "Program ending.\n";
            break;
        
        default:
            cout << "The valid choices are 1 through 4. Run the\n"
                 << "program again and select one of those.\n";
    }
    return 0;
}
~~~
~~~txt
        Health Club Membership Menu

1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

Enter your choice: 2 [ENTER]
For how many months? 6 [ENTER]
The total charges are $120.00
~~~

## More About Blocks and Variable Scope
The scope of a variable is limited to the block in which it is defined.

It is a common practice to define all of a function's variables at the top of the function. Sometimes, especially in longer programs, it's a good idea to define variables near the part of the program where they are used. This makes the purpose of the variable more evident.

### Variables with the Same Name
When a block is nested inside another block, a variable defined in the inner block may have the same name as a variable defined in the outer block. As long as the variable in the innter block is visible, however, the variable in the outer block will be hidden. Example:
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    // Define a variable named number.
    int number;

    cout << "Enter a number greater than 0: ";
    cin >> number;
    if (number > 0)
    {
        int number; // Another variable named number.
        cout << "Now ever another number: ";
        cin >> number;
        cout << "The second number you entered was "
             << number << endl;
    }
    cout << "Your first number was " << number << endl;
    return 0;
}
~~~
~~~txt
Enter a number greater than 0: 2 [ENTER]
Now enter another number: 7 [ENTER]
The second number you entered was 7
Your first number was 2
~~~

This program has two separate variables named number. The cin and cout statements in the inner block (belonging to the if statement) can only work with the number variable defined in that block. As soon the program leaves that block, the inner number goes out of scope, revealing the outer number variable.

**WARNING!** Although it's perfectly acceptable to define variables inside nested blocks, you should avoid giving then the same names as variables in the outer blocks. It's too easy to confuse one variable with another.
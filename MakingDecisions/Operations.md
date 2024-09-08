# Relational Operators
Relational operators allow you to compare numeric and char values and determine whether one is greater than, less than, equal to, or not equal to another.

|Relational Operators|Meaning|
|---|---|
|>|Greater than|
|<|Less than|
|>=|Greater than or equal to|
|<=|Less than or equal to|
|==|Equal to|
|!=|Not equal to|

>Do not confuse the assignment operator, which is one "=" symbol; With the equality operator, which is two "==" symbol.

### What is Truth?
How is a computer able to store *true* and *false* in memory?
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    bool trueValue, falseValue;
    int x = 5, y = 10;

    trueValue = x < y;
    falseValue = y == x;

    cout << "True is " << trueValue << endl;
    cout << "False is " << falseValue << endl;
    return 0;
}
~~~
~~~md
True is 1
False is 0
~~~

## The if Statement
Many algorithms require a program to execute some statements only under certain circumstances. This can be accomplished with a decision structure.

~~~cpp
// This program averages three test scores
#include <iostream>
#include <iomanip>
using namespace std;

it main()
{
    const int HIGH_SCORE = 95;
    int score1, score2, score3;
    double average;

    // Get the three test scores
    cout << "Entere 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    // Calculate and display the average score
    average = (score1 + score2 + score 3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average << endl;

    // If the average is a high score, congratulate the user
    if (average > HIGH_SCORE)
        cout << "Congratulations! That's a high score! ";
    return 0;
}
~~~
~~~md
Enter 3 test scores and I will average them: _**80 90 70 [ENTER]**_
Your average is 80.0
~~~
~~~md
Enter 3 test scores and I will average them: _**100 100 100 [ENTER]**_
Your average is 100.0
Congratulations! That's a high score!
~~~

### Comparing Floating-Point Numbers
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    double a = 1.5;
    double b = 1.5;

    a += 0.0000000001;
    if (a == b)
        cout << "Both a and b are the same.\n"
    else
        cout << "a and b are not the same.\n";
    
    return 0;
}
~~~
~~~md
Both and b are the same.
~~~
To prevent round-off errors from causing this type of problem, you should stick with greater-than and less-than comparisons with floating-point numbers.

## Expanding the if Statement
~~~cpp
// This program averages 3 test scores.
// It demonstrates an if statement executing 
// a block of statements.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int HIGH_SCORE = 95;
    int score1, score2, score3;
    double average;

    // Get the three test scores
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    // Calculate and display the average score
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average << endl;

    // If the average is high, congratulate the user
    if (average > HIGH_SCORE)
    {
        cout << "Congratulations.\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back.\n";
    }
    return 0;
}
~~~
~~~md
Enter 3 test scores and I will average them: _**100 100 100 [ENTER]**_
Your average is 100.0
Congratulations!
That's a high score.
You deserve a pat on the back!


Enter 3 test scores and I will average them: _**80 90 70 [ENTER]**_
Your average is 80.0
~~~

## The if/else Statement
The if/else statement will execute one group of statements if the expression is true, or another group of statements if the expression is false. 

~~~cpp
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer and I will tell you if it\n";
    cout << "is odd or even. ";
    cin >> number;
    if (number % 2 == 0 )
        cout << number << " is even.\n";
    else 
        cout << number << " is odd.\n";
    return 0;
}
~~~
~~~md
Enter an integer and I will tell you if it
is odd or even. _**17 [ENTER]**_
17 is odd.
~~~

## Nested if Statements
To test more than one condition, an if statement can be nested inside another if statement.

~~~cpp
#include <iostream>
using namespace std;

int main()
{
    char employed, recentGrad;

    // Is the user employed and a recent graduate?
    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or ";
    cout << "N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college ";
    cout << "in the past two years? ";
    cin >> recentGrad;

    // Determine the user's loan qualifications
    if (employed == 'Y')
    {
        if (recentGrad == 'Y') // Nested if
        {
            cout << "You qualify for the special "; 
            cout << "interest rate.\n";
        }
        else // Not a recent grad, but employed
        {
            cout << "You must have graduated from ";
            cout << "college in the past two\n";
            cout << "years to qualify.\n";
        }
    }
    else \\ Not employed
    {
        cout << "You must be employed to qualify.\n";
    }
    return 0;
}
~~~
~~~md
Answer the following questions
with either Y for Yes or N for No.
Are you employed? _**N [ENTER]**_
Have you graduated from college in the past two years? _**Y [ENTER]
You must be employed to qualify.
~~~

## The if/else if Statement
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    // Constants for grade thresholds
    const int A_SCORE = 90, B_SCORE = 80, C_SCORE = 70, D_SCORE = 60;
    
    int testScore; // To hold a numeric test score

    // Get the numeric test score
    cout << "Enter your numeric test score and I will\n" 
         << "tell you the letter grade you earned: ";
    cin >> testScore;

    // Determine the letter grade
    if (testScore >= A_SCORE)
        cout << "Your grade is A.\n";
    else if (testScore >= B_SCORE)
        cout << "Your grade is B.\n";
    else if (testScore >= C_SCORE)
        cout << "Your grade is C.\n";
    else if (testScore >= D_SCORE)
        cout << "Your grade is D.\n";
    else 
        cout << "Your grade is F.\n";
    return 0;
}
~~~
~~~md
Enter your numeric test score and I will
tell you the letter grade you earned: _**78 [ENTER]**_
Your grade is C.
~~~

## Flags
A flag is a Boolean or integer variable that signals when a condition exists. Typically a bool variable that signals when some condition exists in the program. When the flag variable is set to false, it indicates that the condition does not exist. When the flag variable is set to true, it means the condition does exist.

For example, suppose a program that calculates sales commisions has a bool variable, defined and initialized as shown here:
~~~cpp
bool salesQuoteMet = false;
~~~
This flag is to indicate whether a salesperson has met the sales quota. When we define the variable, we initialize it with false because we do not yet know if the salesperson has met the sales quota. Assuming a variable named sales holds the amount of sales, code similar to the following might be used to set the value of the *salesQuotaMet* variable:
~~~cpp
if (sales >= QUOTA_AMOUNT)
    salesQuotaMet = true;
else
    salesQuotaMet = false;
~~~
Later in the program we might test the flag in the following way:
~~~cpp
if (salesQuotaMet)
    cout << "You have met your sales quota!\n";
~~~
Integer variables may also be used as flags.
~~~cpp
if (sales >= QUOTA_AMOUNT)
    salesQuotaMet = 1;
else
    salesQuotaMet = 0;

if (salesQuotaMet)
    cout << ""You have met your sales quota!\n"
~~~

## Logical Operators
|Operator|Meaning|
|---|---|
|&&|AND|
|\| \||OR|
|!|NOT|

### Precedence and Associativity of Logical Operators
The ! operator has a higher precendence than many of the C++ operators. To avoid an error, you should always enclose its operand in parentheses unless you intend to apply it to a variable or a simple expression with no other operators.
~~~cpp
!(x > 2)
~~~
If you feel unsure, however, it doesn't hurt to use parentheses anyway.

## Checking Numeric Ranges with Logical Operators
C++ does not allow you to check numeric ranges with expressions such as 5 < x < 20. Instead, you must use a logical operator to connect two relational expressions, as previously discussed.

## Menus
You can use nested if/else statements or the if/else if statement to create menu-driven programs. A menu-driven program alows the user to determine the course of action by selecting it from a list of actions.
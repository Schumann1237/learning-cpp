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
Your must be employed to qualify.
~~~


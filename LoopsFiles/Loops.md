## The Increment and Decrement Operators
To increment a value means to increase it by one, and to decrement a value means to decrease it by one. C++ Provides a set of simple unary operators designed just for incrementing and decrementing variables. The increment operator is ++, and the decrement operator is --.
~~~cpp
num++
~~~
~~~cpp
num--
~~~
Our examples show the increment and decrement operators used in postfix mode, which means the operator is placed after the variable. The operators also work in prefix mode, where the operator is placed before the variable name.

~~~cpp
// This program demonstrates the ++ and -- operators
#include <iostream>
using namespace std;

int main()
{
    int num = 4; // num starts out with 4

    // display the value in num
    cout << "The variable num is " << num << endl;
    cout << "I will now increment num,\n\n";

    // Use prefix ++ to increment num
    num++;
    cout << "Now the variable num is " << num << endl;
    cout << "I will increment num again.\n\n";

    // Use postfix -- to decrement num
    num--;
    cout << "Now the variable num is " << num << endl;
    cout << "I will decrement num again.\n\n";

    // Use prefix -- to increment num
    --num;
    cout << "Now the variable num is " << num << endl;
    return 0;
}
~~~
~~~mdd
The variable num is 4
I will now increment num.

Now the variable num is 5
I will now increment num again.

Now the variable num is 6
I will now decrement num.

Now the variable num is 5
I will now decrement num again.

Now the variable num is 4
~~~

### The difference between postfix and prefix modes
~~~cpp
// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.
#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    cout << num << endl;
    cout << num++ << endl; // Displays 4, then adds 1 to num
    cout << num << endl; // Displays 5
    cout << ++num << endl; // Adds 1 to num, then displays 6
}
~~~
~~~md
4
4
5
6
~~~

### Using ++ and -- in Mathematical Expressions
The increment and decrement operators can also be used on variables in mathematical expressions.
~~~cpp
a = 2;
b = 5;
c = a * b++;
cout << a << " " << b << " " << c;
~~~
~~~cpp
2 6 10
~~~

However, this does not work.
~~~cpp
a = 2;
b = 5;
c = ++(a * b); // Error!
~~~
This is because the operand of the increment and decrement operators must be an lvalue.

### Using ++ and -- in Relational Expressions
Sometimes you'll see code where the ++ and -- operators are used in relational expressions. Just as in mathematical expressions, the difference between postfix and prefix mode is critical.

~~~cpp
x = 10;
if (x++ > 10)
    cout << "x is greater than 10.";
~~~
Two operations are happening in this _if_ statement: (1) The value in _x_ is tested to determine if it is greater than 10, and (2) _x_ is incremented. 
Because the increment operator is used in postfix mode, the comparison happens first. Since 10 is not greater than 10, the cout statement won't execute.

## Introduction to Loops: The *while* Loop
A loop is part of a program that repeats. 
The while loop has two important parts: (1) an expression that is tested for a true or false value, and (2) a statement or block that is repeated as long as the expression is true. The format for a while loop is:
~~~cpp
while (expression)
{
    statement;
    statement;
    // Place as many statements here
    // as necessary.
}
~~~
~~~cpp
#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    while (number < 5)
    {
        cout << "Hello\n";
        number++;
    }
    cout << "That's all!\n";
    return 0;
}
~~~
~~~md
Hello
Hello
Hello
Hello
Hello
That's all!
~~~

### The _while_ loop is a Pretest loop
The while loop is known as a _pretest_ loop, which means it tests its expression before each iteration.

### Infinite Loops
In all but rare cases, loops must contain within themselves a way to terminate. This means that something inside the loop must eventually make the test expression false.

### Don't forget the Braces with a Block of Statements
~~~cpp
int number = 0;
// This loop is missing its braces!
while (number < 5);
    cout << "Hello\n";
    number++;
~~~
This loop will execute infinitely because there is no code in its body that changes the number variable.

Another error is accidentally using the assignment operator when you intend to use the equal operator.
~~~cpp
while (remainder = 1) 
{
    cout << "Enter a number: ";
    cin >> num;
    remainder = num % 2;
}
~~~
Any nonzero value is evaluated as true.

### Programming Style and the While Loop
It's possible to create loops that look like this:
~~~cpp
while (number < 5) ( cout << "Hello\n"; number++;)
~~~
Avoid this style of programming!

## Using the _while_ Loop for Input Validation
The while loop can be used to create input routines that repeat until acceptable data is entered.

~~~cpp
/* This program calculates the number of soccer teams that a youth
league may create from the number of available players. Input
Validation is demonstrated with while loops. */

#include <iostream>
using namespace std;

int main()
{
    // Constants for minimum and maximum players
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;
    
    // Variables
    int players, // Number of available players
        teamPlayers, // Number of desired players per team
        numTeams, // Number of teams
        leftOver; // Number of players left over

    // Get the number of players per team.
    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;

    // Validate the input
    While (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Explain the error
        cout << "You should have at least " << MIN_PLAYERS
             << " but no more than " << MAX_PLAYERS << " per team.\n";
        
        // Get the input again
        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;
    }

    // Get the number of players available
    cout << "How many players are available? ";
    cin >> players;

    // Validate the input.
    while (players <= 0)
    {
        // Get the input again.
        cout << "Please enter 0 or greater: ";
        cin >> players;
    }

    // Calculate the number of teams.
    numTeams = players / teamPlayers;

    // Calculate the number of leftover players
    leftOver = players % teamPlayers;

    // Display the results.
    cout << "There will be " << numTeams << " teams with " << leftOver << " players left over.\n";
    return 0;
}
~~~
~~~md
How many players do you wish per team? 4 [ENTER]
You should have at least 9 but no more than 15 per team.
How many players do you wish per team? 12 [ENTER]
How many players are available? -142 [ENTER]
Please enter 0 or greater: 142 [ENTER]
There will be 11 teams with 10 players left over.
~~~

## Counters
A counter is a variable that is regularly incremented or decremented each time a loop iterates.

~~~cpp
// This program displays a list of numbers and their squares.
#include <iostream>
using namesapce std;

int main()
{
    const int MIN_NUMBER = 1, // Starting number to square
              MAX_NUMBER = 10; // Maximum number to square
    
    int num = MIN_NUMBER; // Counter

    cout << "Number Number Squared\n";
    cout << "-----------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Increment the counter.
    }
    return 0;
}
~~~
~~~
Number Number Squared
---------------------
1           1
2           4
3           9
4           16
5           25
6           36
7           49
8           64
9           81
10          100
~~~
    NOTE: It's important that num be properly initialized. Remember, variables defined inside a function have no guaranteed starting value.

## The *do-while* Loop
The do-while loop is posttest loop, which means its expression is tested after each iteration.

The format for the *do-while* loop looks like this:
~~~cpp
do
    statement;
while (expression);
~~~

~~~cpp
/* This program averages 3 test scores. It repeats as 
many times as the user wishes. */
#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3; // Three scores
    double average; // Average score
    char again; // To hold Y or N input

    do
    {
        // Get three scores.
        cout << "Enter 3 scores and I will average them: ";
        cin >> score1 >> score2 << score3;

        // Calculate and display the average.
        average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << ".\n";

        // Does the user want to average another set?
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    return 0;
}
~~~
~~~
Enter 3 scores and I will average them: 80 90 70 [ENTER]
The average is 80.
Do you want to average another set? (Y/N) y [ENTER]
Enter 3 scores and I will average them: 60 75 88 [ENTER]
The average is 74.3333.
Do you want to average another set? (Y/N) n [ENTER]
~~~
This type of loop is known as a *user-controlled loop*, because it allows the user to decide the number of iterations.

Refer to _**doWhileMenus.cpp**_

## The for Loop
The for loop is ideal for performing a known number of iterations. 

In general, there are two categories of loops: conditional loops and count-controlled loops. A _conditional loop_ executes as long as a particular condition exists. For example, an input validation loop executes as long as the input value is invalid. When you write a conditional loop, you have no way of knowing the number of times it will iterate.

*Count-controlled loops* repeat a specific number of times. It must have three elements.

1. It must initialize a counter variable to a starting value.
2. It must test the counter variable by conparing it to a maximum value. When the counter variable reaches its maximum value, the loop terminates.
3. It must update the counter variable during each iteration. This is usually done by incrementing the variable.

This loop is known as the *for loop*.
~~~cpp
// This program displays the numbers 1 through 1- and their squares
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // starting value
              MAX_NUMBER = 10; // ending value
    int num;

    cout << "Number Number Squared\n";
    cout << "-------------------------";
    
    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
        cout << num << "\t\t" << (num * num) << endl;
    
    return 0;
}
~~~

### The _for_ Loop is a Pretest Loop
Because the for loop tests its test expression before it performs an iteration, it is a pretest loop. It is possible to write a for loop in such a way that it will never iterate:
~~~cpp
for (count = 11; count <= 10; count++)
    cout << "Hello" << endl;
~~~

### Avoid Modifying the Counter variable in the Body of the for Loop
Be careful not to place a statement that modifies the counter variable in the body of the for loop. All modifications of the counter variable should take place in the update expression, which is automatically executed at the end of each iteration.

### Other Forms of the Update Expression
You are not limited to using increment statements in the update expression. Here is a loop that displays all the even numbers from 2 through 100 by adding 2 to its counter.
~~~cpp
for (num = 2; num <= 100; num += 2)
    cout << num << endl;
~~~
And here is a loop that counts backwards from 10 down to 0:
~~~cpp
for (num = 1; num >= 0; num--)
    cout << num << endl;
~~~

### Defining a Variable in the for Loop's Initialization Expression
Not only may the counter variable be initialized in the initialization expression, it may be defined there as well.
~~~cpp
for (int num = MIN_NUMBER; num <= MAX_NUMBER; num++)
    cout << num << "\t\t" << (num * num) << endl;
~~~

When a variable is defined in the initialization expression of a for loop, the scope of the variable is limited to the loop. This means you cannot access the variable in the statements outside the loop. For example, the following program segment will not compile because the last cout statement cannot access the variable count.
~~~cpp
for (int count = 1; count <= 10; count ++)
    cout << count << endl;
cout << "count is now " << count << endl; // ERROR!
~~~

### Creating a User Controlled for Loop
Sometimes you want the user to determine the maximum value of the counter variable in a for loop, and therefore determine the number of times the loop iterates. 
~~~cpp
// This program demonstrates a user controlled for loop
#include <iostream>
using namespace std;

int main()
{
    int minNumber, // starting number to square
        maxNumber; // Maximum number to square

    // Get the minimum and maximum values to display
    cout << "I will display a table of numbers and "
         << "their squares.\n"
         << "Enter the starting number: ";
    cin >> minNUmber;
    cout << "Enter the ending number: ";
    cin >> maxNumber;

    // Display the table.
    cout << "Number Number Squared\n"
         << "--------------------------\n";
    
    for (int num = minNumber; num <= maxNumber; num++)
        cout << num << "\t\t" << (num * num) << endl;
    
    return 0;
}
~~~
~~~
I will display a table of numbers and their squares.
Enter the starting number: 6 [ENTER]
Enter the ending number: 12 [ENTER]
Number Number Squared
---------------------
6           36
7           49
8           64
9           81
10          100
11          121
12          144
~~~

### Using Multiple Statements in the Initialization and Update Expression
It is possible to execute more than one statement in the initialization expression and the update expression. Simple separate the statements with commas.
~~~cpp
int x, y;
for (x = 1, y = 1; x <= 5; x++)
{
    cout << x << " plus " << y
         << " equals " << (x + y)
         << endl;
}
~~~
We can further modify the loop to execute two statements in the update expression.
~~~cpp
int x, y;
for (x = 1, y = 1; x <= 5; x++,  y++)
{
    cout << x << " plus " << y
         << " equals " << (x + y)
         << endl;
}
~~~

### Omitting the for Loop's Expressions
The initialization expression may be omitted from inside the for loop's parenthese if it has already been performed or no initialization is needed.
~~~cpp
int num = 1;
for ( ; num <= maxValue; num++)
    cout << num << "\t\t" << (num * num) << endl;
~~~

You may also omit the update expression if it is being performed elsewhere.
~~~cpp
int num = 1;
for ( ; num <= maxValue; )
    cout << num << "\t\t" << (num * num) << endl;
    num++
~~~
You can even go as far as to omit all three expressions.
~~~cpp
for ( ; ; )
    cout << "Hello world.";
~~~
But this loop will go on forever, as it has no way of terminating.

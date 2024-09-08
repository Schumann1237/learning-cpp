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
String objects can also be compared with relational operators. As with individual character

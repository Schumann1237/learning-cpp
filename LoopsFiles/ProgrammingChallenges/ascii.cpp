// Write a program that uses a loop to display the characters for the ASCII codes 0 through 127. Display 16
// characters on each line
#include <iostream>
#include <iomanip>
using namespace std;

char ascii_characters;
int i;

int main()
{
    for (i = 0; i <= 127; i++)
    {
        ascii_characters = i;
        cout << ascii_characters;
    
        if ((i + 1) % 16 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}

            
        

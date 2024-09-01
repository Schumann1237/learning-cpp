/* 
    Ask the user to enter a character
    store character in variable letter
    use type cast expression in a 
    cout statement to display
    the character's ASCII code 
*/

#include <iostream>
using namespace std;
int main()
{
    char letter;
    
    cin >> letter;
    cout << static_cast<int>(letter) << endl;
    return 0;
}
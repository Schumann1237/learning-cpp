// The area of a rectangle is the rectangle's length times its width. Write a program that asks for the
// length and width of two rectangles. The program should tell the user which rectangle has the greater
// area, or if the areas are the same.

#include <iostream>
using namespace std;

int RectLength1, RectLength2, RectWidth1, RectWidth2, RectArea1, RectArea2;

int main()
{
    cout << "What is rectangle 1's length? ";
    cin >> RectLength1;
    cout << "What is rectangle 1's width? ";
    cin >> RectWidth1;
    cout << "What is rectangle 2's length? ";
    cin >> RectLength2;
    cout << "What is rectangle 2's width? ";
    cin >> RectWidth2;

    RectArea1 = RectLength1 * RectWidth1;
    RectArea2 = RectLength2 * RectWidth2;

    if (RectArea1 > RectArea2)
        cout << "Rectangle 1 has the greater area.";
    else if (RectArea2 > RectArea1)
        cout << "Rectangle 2 has the greater area.";
    else 
        cout << "Both rectangles have the same area.";
    return 0;

}
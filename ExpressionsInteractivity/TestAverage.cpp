/*
    Write a program that asks for five test scores. The program should 
    calculate the average test score and display it. The number displayed
    should be formatted in fixed-point notation, with one decimal point of precision.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float EXAM_1, EXAM_2, EXAM_3, EXAM_4, EXAM_5, average_score;

int main()
{
    cout << "First test score: ";
    cin >> EXAM_1; 
    cout << "Second test score: ";
    cin >> EXAM_2;
    cout << "Third test score: ";
    cin >> EXAM_3;
    cout << "Fourth test score: ";
    cin >> EXAM_4;
    cout << "Fifth test score: ";
    cin >> EXAM_5;

    average_score = (EXAM_1 + EXAM_2 + EXAM_3 + EXAM_4 + EXAM_5) / 5;
    cout << fixed << showpoint << setprecision(2);
    cout << "Average test score is " << average_score;
    return 0;
}
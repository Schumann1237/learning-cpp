// Write a program that calculates and displays a person's BMI. The BMI is often used to determine whether a
// person with a sedentary lifestyle is overweight or underweight for his or her height. A person's BMI is
// calculated with the following formula:
// BMI = weight x 703 / height^2
// where wight is measured in pounds and height is measured in inches. The program should display a message
// indicating whether the person has optimal weight, is under, or overweight. A sedentary person's weight is
// considered to be optimal if BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is 
// conisidered to be underweight. If greater than 25, overweight.

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float WEIGHT, HEIGHT, BMI;

int main()
{
    cout << "Insert height (in inches): ";
    cin >> HEIGHT;
    cout << "Insert weight (in pounds): ";
    cin >> WEIGHT;

    BMI = (WEIGHT * 703) / (pow(HEIGHT, 2.0));
    
    if (BMI < 18.5)
        cout << "You are underweight.";
    else if (BMI >= 18.5 and BMI <= 25)
        cout << "Your weight is optimal.";
    else 
        cout << "You are overweight.";
    return 0;
}
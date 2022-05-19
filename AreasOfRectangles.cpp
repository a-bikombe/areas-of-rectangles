/*
Student Name: Arianna Bikombe
Date: February 18, 2021
Course: CSCI175N
Lab Assignment: Lab03-01AreasOfRectangles
Project Name: Areas Of Rectangles
File Name: Lab03-01AreasOfRectangles.cpp
Description: Determines greater area of two rectangles input by user.
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
using namespace std;

int main() {

    // Local variable declarations placed here
    double firstWidth, firstLength, firstArea;
    double secondWidth, secondLength, secondArea;

    // Print out your name and course
    cout << "Arianna Bikombe" << endl;
    cout << "CSCI175N\n" << endl;

    // Inform user what program does
    cout << "This program determines the greater area of two \n";
    cout << "rectangles input by the user.\n" << endl;

    // Prompt user to enter data needed by the program - first width
    cout << "Enter the width of the first rectangle: " << flush;
    cin >> firstWidth;

    // Prompt user to enter data needed by the program - first length
    cout << "Enter the length of the first rectangle: " << flush;
    cin >> firstLength;

    // Skip extra line
    cout << endl;

    // Prompt user to enter data needed by the program - second width
    cout << "Enter the width of the second rectangle: " << flush;
    cin >> secondWidth;

    // Prompt user to enter data needed by the program - second length
    cout << "Enter the length of the second rectangle: " << flush;
    cin >> secondLength;

    // Skip extra line
    cout << endl;

    // Area formulas
    firstArea = firstWidth * firstLength;
    secondArea = secondWidth * secondLength;

    // Program output
    cout << "Rectangle 1 area is " << firstArea << " square units\n";
    cout << "Rectangle 2 area is " << secondArea << " square units\n" << endl;

    // Skip extra line
    cout << endl;

    // Determines whether one is greater
    if (firstArea > secondArea)
        cout << "Rectangle #1 has the greater area.\n" << endl;
    else if (firstArea < secondArea)
        cout << "Rectangle #2 has the greater area.\n" << endl;
    else
        cout << "Both rectangles are equal.\n" << endl;

    // This code pauses the program so instructor can grade
    system("pause");

    return 0;
}

/*

test 1

Arianna Bikombe
CSCI175N

This program determines the greater area of two
rectangles input by the user.

Enter the width of the first rectangle: 2.3
Enter the length of the first rectangle: 5.7

Enter the width of the second rectangle: 1.8
Enter the length of the second rectangle: 11.6

Rectangle 1 area is 13.11 square units
Rectangle 2 area is 20.88 square units


Rectangle #2 has the greater area.

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N

This program determines the greater area of two
rectangles input by the user.

Enter the width of the first rectangle: 2
Enter the length of the first rectangle: 2

Enter the width of the second rectangle: 2
Enter the length of the second rectangle: 2

Rectangle 1 area is 4 square units
Rectangle 2 area is 4 square units


Both rectangles are equal.

Press any key to continue . . .

*/
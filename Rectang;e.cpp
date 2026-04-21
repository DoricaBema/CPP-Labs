
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float userL, userW;

    // Instance 1: Default Constructor
    Rectangle rect1;
    cout << "--- Rectangle 1 (Default Constructor) ---" << endl;
    cout << "Enter length: ";
    cin >> userL;
    rect1.setLength(userL);
    cout << "Enter width: ";
    cin >> userW;
    rect1.setWidth(userW);
    cout << "Area: " << rect1.calculateArea() << endl;

    // Instance 2: Overloaded Constructor
    cout << "\n--- Rectangle 2 (Overloaded Constructor) ---" << endl;
    cout << "Enter length: ";
    cin >> userL;
    cout << "Enter width: ";
    cin >> userW;
    
    Rectangle rect2(userL, userW);
    cout << "Area: " << rect2.calculateArea() << endl;

    return 0;
}
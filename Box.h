#pragma once
#include <iostream>
using namespace std;

class Box {
public:
    // Constructors
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);

    // Destructor
    ~Box();

    // Member functions
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    // Operator overloading
    Box operator+(const Box& b);

private:
    double length;
    double breadth;
    double height;
};

#ifndef AREA_H
#define AREA_H
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static float calcSquare(const shapes::Square& s);
    static float calcTriangle(const shapes::Triangle& t);
    static float calcCircle(const shapes::Circle& c);
};
#endif
#include "Area.h"
float Area::calcSquare(const shapes::Square& s) { return s.getSide() * s.getSide(); }
float Area::calcTriangle(const shapes::Triangle& t) { return 0.5f * t.getBase() * t.getHeight(); }
float Area::calcCircle(const shapes::Circle& c) { return 3.14159f * c.getRadius() * c.getRadius(); }
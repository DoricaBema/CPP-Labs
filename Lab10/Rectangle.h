#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {
    public:
    void SetValues(int width, int height);
    int Area();
    private:
    int mWidth;
    int mHeight;
};
#include "Polygon.h"

class Triangle : public Polygon {
    public:
    int Area();
    private:
    int mWidth;
    int mHeight;
};
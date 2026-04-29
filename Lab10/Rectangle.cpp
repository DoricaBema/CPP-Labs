#include "Rectangle.h"

void Rectangle::SetValues(int width, int height) {
    mWidth = width;
    mHeight = height;
}
int Rectangle:: Area() {
    return mWidth * mHeight;
}
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;

int main() {
    int choice;
    while(true) {
        cout << "\n1. Square\n2. Triangle\n3. Circle\n4. Quit\nSelection: ";
        cin >> choice;
        if(choice == 4) break;

        if(choice == 1) {
            float s; cout << "Side: "; cin >> s;
            shapes::Square sq(s);
            cout << "Area: " << Area::calcSquare(sq) << endl;
        }
if(choice == 2) {
    float b, h; cout << "Base and Height: "; cin >> b >> h;
    shapes::Triangle tri(b, h);
    cout << "Area: " << Area::calcTriangle(tri) << endl;
} 
else if(choice == 3) {
    float r; cout << "Radius: "; cin >> r;
    shapes::Circle circ(r);
    cout << "Area: " << Area::calcCircle(circ) << endl;
}
    }
    return 0;
}
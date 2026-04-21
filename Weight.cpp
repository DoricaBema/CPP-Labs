#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f, 25);
    Person John("John", 75.0f, 30);

    float totalWeight = Jane + John;

    string janeFirstName = "Jane";
    cout << "Jane's FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane's Weight: " << janeWeight << endl;

    

    return 0;
}
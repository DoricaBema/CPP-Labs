#include <iostream>
using namespace std;

//Enumeration
enum Months{
    January,
    February,
    March,
    April,
    May
};

int main() {
    Months thisMonth = February;

    //Comparison and condition
    if (thisMonth == March || thisMonth == May) {
        cout << "We will have a public holiday";
    }

    return 0;
}
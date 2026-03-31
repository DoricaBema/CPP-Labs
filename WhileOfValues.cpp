#include <iostream>
#include <limits> // Required forclearing the input buffer

using namespace std;

int main() {
    int inputValue;
    bool isValid = false;

    cout << "Enter an integer value between 5 and 10" << endl;

    while (!isValid) {

        if (cin >> inputValue) {

            if (inputValue >= 5 && inputValue <= 10) {
                isValid = true; // this will break the loop
            } else {
                cout << "You entered " << inputValue << ". Please enter a number between 5 and 10." << endl;
            }
        } else {
            cout << "Sorry, you entered an invalid number, please try again" << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "Your input value (" << inputValue << ") has been accepted." << endl;

    return 0;
}

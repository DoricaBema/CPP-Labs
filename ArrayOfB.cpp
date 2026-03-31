#include <iostream>
#include <string> // Required for string data types
#include <vector> // Using vector for easier management, or use a standard array

using namespace std;

int main() {
    // 1. Declare and initialize the array
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    // Calculate the number of elements in the array
    int arraySize = sizeof(elements) / sizeof(elements[0]);

    // 2. Create a for loop to iterate through the array
    for (int i = 0; i < arraySize; i++) {
        
        // 3. Check if the element starts with the letter 'B'
        // We check the character at index 0 of the current string
        if (elements[i][0] == 'B') {
            
            // 4. Output the matching element to the console
            cout << elements[i] << endl;
        }
    }

    return 0;
}
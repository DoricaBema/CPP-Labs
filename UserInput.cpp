#include <iostream> 
using namespace std;

int main() { 
  int x, y;
  int sum;
  cout << "Type a number: "; // Type a number and press enter 
  cin >> x; // Get user input from the keyboard 
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is:" <<sum; 
  return 0; 
}
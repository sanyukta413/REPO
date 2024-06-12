//Implicit Type Conversion

#include <iostream>
using namespace std;

int main() {
  char character_var = 's';
  int integer_var;                           // Explicitly converting a character variable to an integer variable

  integer_var = (int) character_var;              // Using cast notation.

  cout << "The value of character_var is: " << character_var << endl;
  cout << "The value of integer_var is: " << integer_var << endl;

  return 0;
}


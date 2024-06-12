//type conversion
//conversion of variable from one data type to another

//Implicit Type Conersion

#include <iostream>

using namespace std;

int main() {
  int integer_var = 13;
  char character_var = 's';

 integer_var = integer_var + character_var;      // character_var is implicitly converted to the integer ASCII of 's'.
 
                                                 // ASCII of 's' is 115.

  cout <<"The value of (13 + 's') is: " << integer_var << endl;                  // converting integer_var to a float implicitly
  float float_var = integer_var * 1.5;

  cout << "The value of float_var is: " << float_var << endl;

  return 0;
}
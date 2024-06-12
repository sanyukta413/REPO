//another example 0f implicit conversion 

#include <iostream>
using namespace std;

int main() {

   int int_num;
   double double_num = 5.77;

   // implicit conversion
   // assigning a double value to an int variable

   int_num = double_num;
   
   cout<<"Integer number = "<<int_num<<endl;
   cout<<"Double number = "<<double_num<<endl;

   return 0;
}


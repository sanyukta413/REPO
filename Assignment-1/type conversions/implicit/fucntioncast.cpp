//fucntion-style casting of Explicit Conversion

#include <iostream>
using namespace std;

int main()
{
    double num_double = 5.77;                //declaring integer variable num_int
    int num_int;                            //declaring integer variable num_int
    num_int = int(num_double);                   // function-type casting  

//assigning the value inside the num_double to the num_int variable

    cout<<"Integer number = "<<num_int;
    return 0;
}
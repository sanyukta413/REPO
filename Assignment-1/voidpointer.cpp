
//C++ Program to declare and use a void pointer 
  
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int n= 10;      // void pointer holds address of int 'a' 

    void* myptr = &a;  // printing the value of a and adress of a stored in myptr

    cout << "The value of n is: " << n << endl; 
    cout << "The Adress of n is  " << myptr << endl; 
}



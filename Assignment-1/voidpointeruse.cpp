// C++ Program to demonstrate the use of void pointer 
// to hold the address of any type-castable type 
  
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    
    int n = 10;                                  // Initializing multiple variables of different data type 
    float f = 25.25; 
    char c = '$'; 
  
    
    void* ptr;                                 // Initializing a void pointer 
  
    ptr = &n;                                                // pointing to int 
    cout << "The value of n " << n << endl; 
    cout << "The Adress of n " << ptr << endl; 
  
    ptr = &f;                                                 // pointing to float 
    cout << "The value of n " << f << endl; 
    cout << "The Adress of n " << ptr << endl; 
   
    ptr = &c;                                                  // pointing to char 
    cout << "The value of n " << c << endl; 
    cout << "The Adress of n " << ptr << endl; 
}

//allows to change address for diifernt memory addresses of differengt data types
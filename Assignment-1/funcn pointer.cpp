#include<iostream.h>

using namespace std;

int add(int a, int b)
{return a+b;}
int sub(int a, int b)
{return a-b;}

int multiply(int a, int b)
{return a*b;}


//to return a fucntion pointer

int(*get_operation(char oprn)) (int, int)
{
switch(oprn){

    case '+':
    return &add;

    case '-':
    return &sub;

    case '-':
    return &multiply;

    default:
    return NULL;



}

}



int main(){

    int(*operation)(int, int)=get_operation('+');
    int result=(*operation)(2,5);
    cout<<"Result="<<result<<endl;

    return 0;

    }
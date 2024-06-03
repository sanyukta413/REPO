//global variable

//only func2 has definition for a since 'a' is available to each function without passing 'a' as an fucntion argument

#include<stdio.h>
#include<conio.h>

int func1(void);
int func2(void);
int func3()void;
int a;                   //a is a global vairable

main(){

    a=10;                 /* global a */

    printf("a=%d\n",a);
    printf("a=%d\n",func1());
    printf("a=%d\n",func2());
    printf("a=%d\n",func3());
}

func1(void)            //no use of return(a) since value of a is directly available
{
    a=a+10;
}

int func2(void)            //returns local value of 'a', global not visible
{
    int a;
    a=1;
    return(a);
}

func3(void)                //no use of return(a) since value of a is directly available
{
a=a+10;

}
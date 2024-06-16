//a very simple code to understand how reference and dereference  operator works in pointers

#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{ 
 int x=10;                                  //assigning value to a variable
 int *px;                                  // '*' is a dereference operator
 px=&x;                                   // '&' is a reference operator
 printf("%u %u %u",&x,px,&px);
 printf("%d %d",x,*px);

}

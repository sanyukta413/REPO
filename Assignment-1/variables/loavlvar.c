//showing how a local variable works
//a is a local variable

#include<stdio.h>
#include<conio.h>

void func1(void);
void func2(void);

int main(){
    
int a=1000;       //a is initialized to 10,100,1000 in func1, func2 and main
func2();          //main calls func2

printf("%d\n",a);     /*Third Output*/
}

void func1(void)
{
    int a=10;
    printf("%d\n",a);       /*First Output*/

}

void func2(void)
{
    int a=100;
    printf("%d\n",a);       /*Second Output*/

}



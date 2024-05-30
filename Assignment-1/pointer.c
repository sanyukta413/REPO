//compute sum of elements in an array with pointer

#include<stdio.h>
#include<conio.h>

int main()
{
    int *p, sum, i;
    int x[5]={2,4,6,8,10};
    i=0;
    p=x;              //initialize with base address

    printf("Value address\n");

    while(i<5){

        printf("x[%d] %d %u\n", i,p,*p);
        sum=sum+*p;                     //accessing arary element
        i++;                            //increment pointer
        p++;
    }
    printf("\nSum= %d\n",sum);
    printf("\n&x[0]= %u",&x[0]);
    printf("\np =%u", p);

    }


//using structure pointers to update inventory in a store

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct store{ 

char name[30];
float pirce;
int quantity;
};

int main()
{
    void update(struct store *, float, int);
    float p_increment, value;
    int q_increment;

    struct store item={"Cold Drinks",100,12};
    struct store *ptr = &item;

    printf("\n Input increment values=");
     printf("\n Input Price Increment Value=");
      printf("\n Input Quantity Increment Value=");
      scanf("%f %d %d",&p_increment, &q_increment);


      update(&item, p_increment, q_increment);

       printf("\n Updated value=");
       printf("\n Name of Item=%s");
       printf("\n Price=%f");
       printf("\n Quantity=%d");

       value= mul(&item);

       printf("\n Value of Item= %f",value);
}


void update(struct store* product, float p, int q)
{

    product->price +=p;
    product->quantity +=q;
}
 float mul(struct store *stock)
 {
    return(stock->price*stock->quantity);
 }

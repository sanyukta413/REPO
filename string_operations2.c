//sort strings in alpahbetical order

#include<stdio.h>
#include<string.h>
#define ITEMS 7
#define MAXCHAR 30

main(){

char string[ITEMS][MAXCHAR], dummy[MAXCHAR];
int i=0;
int j=0;

//To read the items or strings list

printf("Enter the strings of %d items\n",ITEMS);

while(i<ITEMS)
scanf("%s",string[i++]);

//sort the strings alpabetically

for(i=1;i<ITEMS;i++)  //outer lopp
{

for(j=1; j<=ITEMS-i; j++)     //inner for loop
{
   if(strcmp(string[j-1],string[j])>0)

   {
      strcpy(dummy,string[j-1]);
      strcpy(string[j-1],string[j]);
      strcpy(string[j],dummy);

   }

}            //inner loop ends

}           //outer loop ends

//output

printf("\nStrings in alphabetical order\t\n");

for(i=0; i<ITEMS;i++)
printf("%s",string[i]);

}
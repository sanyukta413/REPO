
//taking user input and reverse the inputted string 

#include<stdio.h>
#include<string.h>

  int main()
{
   char string[20]; // declaring a char array

   printf("Enter a string : ");
   gets(str); // taking the user input

   printf("The entered string is : %s\n", str); // printing the original string

   strrev(str); // reversing the string

   printf("The string after using function strrev() is : %s\n", str); // printing the reversed string

   return 0;
}

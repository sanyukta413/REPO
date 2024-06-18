// to understand string operations 

//program to introduce three strings, read two strings and compare if they are equal or not. 


#include<stdio.h>
#include<string.h>

main(){

char string1[30], string2[30], string3[30];
int a, length1, length2, length3;
printf("Enter two strings\n");
printf("?");
scanf("%s %s",string1,string2);

/*  Comparing the two strings i.e.string1 and string2*/

a=strcmp(string1,string2);          //compare two strings 1 and 2

if(a!=0)
{

printf("Strings are not equal\n");
strcat(string1,string2);              //concatenates two strings

}

else
printf("Strings are equal\n");

/*If the strings are not equal, join the strings and copy content of string1 to string3*/

//Copying string1 to string3

strcpy(string3, string1);

//for length of the string

length1=strlen(string1);                  //counts and returns the number of characters in a string
length2=strlen(string2);
length3=strlen(string3);

//to print the output of all three strings

printf("string1=%s\t length=%d characters\n",string1,length1);
printf("string2=%s\t length=%d characters\n",string2,length2);
printf("string3=%s\t length=%d characters\n",string3,length3);


}
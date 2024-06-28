//copy onse sting to another and count the numbers of characters copied

#include<stdio.h>
#include<string.h>

int main(){
	
	char string1[80],string2[80];
	int i;
	printf("Enter a string:\n");
	scanf("%s",string2);
	
	for(i=0;string2[i]!='\0';i++)             //for loop used to copy cgaracters inside str2 to str1
	
	string1[i]='\0';                          //loop termintaed when null character is reached
	printf("\n");
	printf("%s\n",string1);
	printf("Number of Characters: %d\n",i);
	
}

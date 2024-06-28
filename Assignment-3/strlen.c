//to read a string and check if a string is a palindrome or not with strlen

#include<stdio.h>
#include<string.h>

void main(){
	
	char check='t',str[30];          // declaring var i.e. check for palindrome check, str for input string
	int length, left, right; 
	printf("\nEnter a string:");
	scanf("%s",str);
	length=strlen(str);              // Calculate length of the string
	left=0;                          // Initialize left index to start of string
	right=length-1;                 // initialize right index to end of string
	
	while(left<right &&check=='t')
	{
		if(!(str[left]==str[right]))        // compare characters from start and end of string
		check='f';
		left++;
		right--;
	
	}
	
	if(check=='t')
	printf("\nThe string %s is a palindrome.",str);
	
	else
	
	printf("\nThe string %s is not a palindrome.",str);
	
}

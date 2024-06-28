//program for user to enter string, reverse it and compare the difference in their ASCII values 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>                

//program for user to enter string, reverse it and compare the difference in their ASCII values 

#define MAX_LENGTH 100                

void reverseString(char *str) {
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {                 // reverse the string
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    }
}

int main() {
	
    char input[MAX_LENGTH];
    char reverse[MAX_LENGTH];

    // Prompt user to enter a string
    printf("Enter a string: ");
    fgets(input, MAX_LENGTH, stdinput);
    
    strcpy(reverse, input);               // copy input to reversed and then reverse it
    reverseString(reverse);

    
    printf("Reversed string: %s\n", reversed);       // print the reversed string


    printf("ASCII differences:\n");                  // calculate and print the difference in ASCII values
    for (int i = 0; input[i] != '\0'; i++) {
        int diff = abs(input[i] - reverse[i]);
        printf("%c - %c = %d\n", input[i], reverse[i], diff);
    }

    return 0;
}

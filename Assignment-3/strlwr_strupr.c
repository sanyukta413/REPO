
//program to covert one string to uppercase and another to lowercase

#include <stdio.h>
#include <string.h>

int main() {
	
    char string1[] = "I am Sanyukta Shrestha.";
    char string2[] = "I study in Nepal Engineering College.";

    printf("Input string:\n");
    
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);

    
    strlwr(string1);               // Convert string1 to lowercase using strlwr
    
    printf("\n Converting string1 to lowercase:\n");
    printf("string1: %s\n", string1);

    
    strupr(string2);                 // Convert string2 to uppercase using strupr
    
    printf("\n Converting string2 to uppercase:\n");
    printf("string2: %s\n", string2);

    return 0;
}

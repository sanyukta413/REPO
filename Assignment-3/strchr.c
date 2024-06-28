//program using strchr() function to search for first occurrence of the space (”) in string

#include <stdio.h> 
#include <string.h> 

int main() { 

    char str[] = "I am Sanyukta Shrestha and I like to read books.";   //to find the first occurrence of pace '' in the string  
    char *ptr = strchr(str, ' '); 

    while (ptr != NULL) { 

    printf("Space found at position %ld.\n", ptr - str); 
    ptr = strchr(ptr + 1, ' '); 
    } 

    return 0; 
}

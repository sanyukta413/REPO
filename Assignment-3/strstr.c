
//program to use strstr() to find the position of the substring within a main string

#include<stdio.h>
#include<string.h>


int main() {
	
   char str1[] = "When you play the game of thrones, you either win or you die.";
   char str2[] = "game of thrones";
   
   char *result = strstr(str1, str2);         // strstr() function used to find str2 in str1


   if (result != NULL) {       //The comparison (result != NULL) checks if str2 was found in str1.

    printf("Substring found at position %d\n", result - str1);
   } 
   
   else {
   	
 printf("Substring not found:\n");
   }


   return 0;
}

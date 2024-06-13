#include<stdio.h>
#include<windows.h>
#include <string.h>
#include<unistd.h>>

typedef int (*AddFunc1)(int, int);            //defines a function type

int add(int a, int b) {                       // Function that performs addition
    return a + b;
}


typedef struct {
    char name[50];                               // Structure to hold function information i.e name, pointer, and argument
    AddFunc1 func;
    int arg1;
    int arg2;
} FunctionRegistry;


// Function to register a function pointer along with its name and arguments
void registerFunction(FunctionRegistry *registry, int *size, const char *name, AddFunc1 func, int arg1, int arg2) {
    strcpy(registry[*size].name, name);
    registry[*size].func = func;
    registry[*size].arg1 = arg1;
    registry[*size].arg2 = arg2;
    (*size)++;
}


// Function to get a function pointer by name and execute it with its arguments
void executeFunction(FunctionRegistry *registry, int size, const char *name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(registry[i].name, name) == 0) {
            int result = registry[i].func(registry[i].arg1, registry[i].arg2);
            printf("The result of %s is: %d\n", name, result);
            return;
        }
    }
    printf("Function not found.\n", name);
}
    
    
    // Function to call each registered function after a delay
void callFunction(FunctionRegistry *registry, int size, int delay){
    for (int i = 0; i < size; i++) {
        int result = registry[i].func(registry[i].arg1, registry[i].arg2);
        printf("The result of %s is: %d\n", registry[i].name, result);
        sleep(delay);
    }
}

int main() {
    // Array to hold registered functions and size 

    FunctionRegistry registry[10];
    int registrySize = 0;
    
    // Register the 'add' function

    registerFunction(registry, &registrySize, "add", add, 10, 5);
    
    // Execute the 'add' function by name

    executeFunction(registry, registrySize, "add");
    
    
    // Call each registered function with a delay of 3 seconds

    printf("\nCalling each registered function with a delay of 3 seconds:\n");
    callFunction(registry, registrySize, 2);
    
    return 0;
}





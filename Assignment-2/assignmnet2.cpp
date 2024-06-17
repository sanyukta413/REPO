#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Define a general function pointer type that accepts a void pointer argument
typedef void (*FuncPointer)(void*);

// Structure to hold function name, function pointer, and argument
typedef struct {
    char name[50];
    FuncPointer func;
    void* arg;
} FunctionRegistry;

// Function to register a function pointer along with its name and arguments
void registerFunction(FunctionRegistry *registry, int *size, const char *name, FuncPointer func, void* arg) {
    strcpy(registry[*size].name, name);  // Copy function name to the registry
    registry[*size].func = func;         // Store function pointer
    registry[*size].arg = arg;           // Store function argument
    (*size)++;                           // Increment the registry size
}

// Function to get a function pointer by name and execute it with its arguments
void executeFunction(FunctionRegistry *registry, int size, const char *name) {
    for (int i = 0; i < size; i++) {     // Loop through the registry
        if (strcmp(registry[i].name, name) == 0) {  // Compare function names
            registry[i].func(registry[i].arg);  // Call the function with its argument
            return;
        }
    }
    printf("Function %s not found.\n", name);  // Print message if function not found
}

// Function to call each registered function after a delay
void callFunction(FunctionRegistry *registry, int size, int delay) {
    for (int i = 0; i < size; i++) {     // Loop through the registry
        registry[i].func(registry[i].arg);  // Call the function with its argument
        sleep(delay);                    // Delay between calls
    }
}

// Structure to hold a float and an integer
typedef struct {
    float f;
    int i;
} FloatIntArgs;

// function to demonstrate use of float and struct
void printFloatInt(void* args) {
    FloatIntArgs* fiArgs = (FloatIntArgs*)args;
    printf("Float: %f, Int: %d\n", fiArgs->f, fiArgs->i);
}

// functions with different signature
void add(void* args) {
    int* intArgs = (int*)args;
    printf("The result of add is: %d\n", intArgs[0] + intArgs[1]);
}

void multiply(void* args) {
    int* intArgs = (int*)args;
    printf("The result of multiply is: %d\n", intArgs[0] * intArgs[1]);
}

int main() {
    FunctionRegistry registry[10];
    int registrySize = 0;

    int addArgs[] = {10, 5};             // Arguments for add function
    int multiplyArgs[] = {10, 5};        // Arguments for multiply function
    FloatIntArgs printArgs = {3.14f, 42}; // Arguments for printFloatInt function

    // Register the 'add' and 'multiply' functions
    registerFunction(registry, &registrySize, "add", add, addArgs);
    registerFunction(registry, &registrySize, "multiply", multiply, multiplyArgs);
    registerFunction(registry, &registrySize, "printFloatInt", printFloatInt, &printArgs);

    // Execute the 'add', 'multiply', and 'printFloatInt' functions by name
    executeFunction(registry, registrySize, "add");
    executeFunction(registry, registrySize, "multiply");
    executeFunction(registry, registrySize, "printFloatInt");

    // Call each registered function with a delay of 3 seconds
    printf("\nCalling each registered function with a delay of 3 seconds:\n");
    callFunction(registry, registrySize, 3);

    return 0;
}






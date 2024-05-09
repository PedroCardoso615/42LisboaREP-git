#include <stdio.h>

// Pointers = a "variable like" reference that holds a memory address to another variable, array, etc.
// Some tasks are performed more easily with pointers.
// * = indirection operator (value at address).

int main()
{
    int age = 21;
    int *pAge = &age;

    printf("Address of age: %p.\n", &age);
    printf("Value of pAge: %p.\n", pAge);

    printf("Size of Age: %d bytes.\n", sizeof(age));
    printf("Size of pAge: %d bytes.\n", sizeof(pAge));

    printf("Value of Age: %d.\n", age);
    printf("Value at stored address: %d.\n", *pAge);

    return 0;
}
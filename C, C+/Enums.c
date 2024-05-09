#include <stdio.h>
#include <string.h>

//enum = a user defined type of named integer identifiers.
// Helps to make a program more readable.
//Enums are not strings, but they can be treated as an int (%d).

enum Day{Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
    enum Day today = Sun;

    printf("%d", today);
    printf("\n");

    if(today == Sun || today == Sat)
    {
        printf("It's the weekend.");
    }
    else
    {
        printf("It's work day.");
    }
    




    return 0;
}
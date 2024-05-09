#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s.", name);
    printf("\nYou are now %d years old!", age);
}

int main(){

    char name[] = "Pedro";
    int age = 21;


    birthday(name, age);


    return 0;
}
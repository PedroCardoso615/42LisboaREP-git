#include <stdio.h>
#include <string.h>

//While loops repeats a section of code possibly unlimited times.
//A While Loop might not execute at all
int main()
{

char name[25];

printf("What's your name? \n");
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0';

while(strlen(name) == 0)
{
    printf("You did not enter your name.\n");
    printf("What's your name? \n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
}

printf("Hello I was told that your name is %s.\n", name);



    return 0;
}
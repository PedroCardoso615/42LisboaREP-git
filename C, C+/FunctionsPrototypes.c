#include <stdio.h>

void regist(char[], int); //function prototype (helps the compiler to find an error if there are missing arguments).

int main(){
 
char name[] = "Pedro";
int age = 20;

regist(name, age);
    return 0;
}

void regist(char name[], int age){

    printf("Hi %s.\n", name);
    printf("You are %d years old.\n", age);
}

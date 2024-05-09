#include <stdio.h>

int main(){

    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You're now signed up.");
    }
        else if(age < 0){
        printf("You haven't been born yet.");
    }

    else{
        printf("You're not allowed to sign in. You need to be at least 18 years old.");
    }

    return 0;
}
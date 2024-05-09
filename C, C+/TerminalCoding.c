#include <stdio.h>
#include <string.h>

int main(){

    int age;
    char name [25];
    char country [45];
    float grade;

       printf("What's your name?\n", name);
    //scanf("%s", &name); (The scanf doesn't read white spaces so with can't write your full name).
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

      printf("Where do you live?\n", country);
    fgets(country, 45, stdin);
    country[strlen(country)-1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("What was your highschool grade?\n");
    scanf("%f", &grade);

    printf("Nice to meet you %s.\n", name);
    printf("You live in %s.\n", country);
    printf("You are %d years old.\n", age);
    printf("Your highschool grade was %.2f.\n", grade);

   //OU... SE FOR TUDO NA MESMA FRASE E NA MESMA LINHA.

    //printf("You are %s, You live in %s, you are 20 years old and your highschool grade was %f.", name, country, age, grade);

    int x = 5;
    float y = 2;

    float w = x / y;

    printf("%.2f\n", w);





    return 0;
}
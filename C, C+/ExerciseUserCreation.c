#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    char username [25];
    int age;
    char country [40];
    double tkills;
    double tdeaths;
    double gkills;
    double gdeaths;
    double kd;
    double ngames;
    int year;


    printf("What will be your username?\n", username);
    //scanf("%s", &name); (The scanf doesn't read white spaces so with can't write your full name).
    fgets(username, 25, stdin);
    username[strlen(username)-1] = '\0';

    printf("In which country are you playing in?\n", country);
    fgets(country, 40, stdin);
    country[strlen(country) -1] = '\0';

    printf("What's your age?\n", age);
    scanf("%d", &age);

    printf("What's your number of kills?\n");
    scanf("%lf", &tkills);

    printf("What's your number of deaths?\n");
    scanf("%lf", &tdeaths);

    printf("What's your current number of games?\n");
    scanf("%lf", &ngames);

    printf("In what year did you start to play?\n");
    scanf("%d", &year);

    kd = tkills/tdeaths;
    gkills = tkills/ngames;
    gdeaths = tdeaths/ngames;

    printf("Your new username is %s.\n", username);
    printf("**************\n");
    printf("You're now registered to play in %s.\n", country);
    printf("**************\n");
    printf("You're average of kills per game is %.0lf.\n", gkills);
    printf("**************\n");
    printf("You're average of deaths per game is %.0lf.\n", gdeaths);
    printf("**************\n");
    printf("You've now played %.0lf games since %d.\n", ngames, year);
    printf("**************\n");
    printf("Your k/d is %.2lf.\n", kd);
    printf("**************\n");

    if(tkills > tdeaths)
    {
        printf("You're K/D may be positive by the information that you gave.\n");
    }
    else
    {
        printf("You've to get more kills in order to get a positive K/D!\n");
    }

    printf("**************\n");

    if(age >= 18){
        printf("You've now signed up and you're ready to play!\n");
    }
    else{
        printf("You're not old enough to sign up, you need to be at least 18 years old!\n");
    }





    return 0;
}
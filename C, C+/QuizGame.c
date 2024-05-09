#include <stdio.h>
#include <ctype.h>


int main()
{
    char questions[][100] = {"1. What year was the Sport Lisboa e Benfica founded?: ",
                             "2. Who is the current President of the club refered on the previous question?: ",
                             "3. How many league titles does this club have in the year 2024?: "};

    char options[][200] = {"A. 2004", "B. 1965", "C. 1904", "D. 1892",
                           "A. Luis Filipe Vieira", "B. Rui Costa", "C. Pinto da Costa", "D. Frederico Varandas",
                           "A. 20", "B. 26", "C. 31", "D. 38"};

    char answers[3] = {'C', 'B', 'D'};

    int numofquestions = sizeof(questions)/sizeof(questions[0]); 

    char guess;
    int score;

    printf("QUIZ GAME\n");

    for(int i = 0; i < numofquestions; i++)
    {
        printf("*************\n");
        printf("%s\n", questions[i]);
        printf("*************\n");

        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("Guess: ");
        scanf("\n");
        scanf("%c", &guess);
        scanf("%c"); //clear \n form input buffer

        guess = toupper(guess);

        if(guess == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }         

    printf("*************\n");
    printf("FINAL SCORE: %d/%d.\n", score, numofquestions);                                     
    printf("*************\n");



    return 0;
}
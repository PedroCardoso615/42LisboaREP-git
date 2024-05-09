#include <stdio.h>

int main(){

 char grade;

   printf("Enter your grade: \n");
   scanf("%c", &grade);

   grade = toupper(grade);

   switch(grade){
    case 'A':
        printf("Perfect! \n");
        break; //On a switch statement it's mandatory to have the break function because if not it will display every printf function between the bracelets.
    case 'B':
        printf("Very good! \n");
        break;    
    case 'C':
        printf("Okay. \n");
        break;
    default: //To have a default value if it doesn't correspond to any of the possibilities.
        printf("Please enter only valid grades.\n");
   }

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main(){
    //Basic Comment

    /*  
    This is a
    Multiline
    Comment
    */

    printf("Experience with C.\n");
    printf("Programming Course.\n");
    printf("Programmer Options.\n");
    printf("\n");

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\n");

    printf("\"Eu Penso, Logo Existo\" - René Decartes\n");
    printf("\n");

    int x; //declaration
    x = 123; //value of the variable (initialization)
    
    int y = 321; //declaration + initialization

    int age = 19; //integer
    float GPA = 15.70; //floating point number 
    char grade = 'A'; //Single Character
    char name [] = "Pedro Cardoso"; //array of characters
    bool occupation = true; //bool (1 equals True and 0 equals False)
    char letter = 120; //It represents the letter "X" (See the ACSII Table)
    
    printf("Your name is %s, right?\n", name);
    printf("You are %d years old.\n", age);
    printf("Your grade was %c, well done!\n", grade);
    printf("Your GPA is %0.2f, above the common GPA's.\n", GPA);
    printf("Are you employed? %d\n", occupation);
    printf("The letter represented by the number 120 is %c.\n", letter);
    printf("\n");

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item1: %-.2f€\n", item1);
    printf("Item2: %-.2f€\n", item2);
    printf("Item3: %-.2f€\n", item3);
    printf("\n");

    int a = 5;
    int b = 2;
    int z = a + b; //+ (Addition); - (Subtraction); * (Multiplication).

    printf("%d\n", z);

    int c = 5;
    float d = 2;
    float w = c / d; // / (Division).

    printf("%.2f", w);








    return 0; 
}
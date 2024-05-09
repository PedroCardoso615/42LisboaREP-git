#include <stdio.h>
#include <stdbool.h>

int main(){

// logical operators = && (AND, Checks if the conditions are true); || (OR, Checks if at least one condition is true); ! (NOT, Reverses a state of a condition).
// &&:

float temp = 34;
bool sunny = true;

if(temp >= 0 && temp <= 35 && sunny == true){
    printf("\nThe weather is good!");
}
else{
    printf("\nThe weather is bad!");
}

printf("\n");

// ||:

float degree = 25;

if(degree <= 0 || degree >= 30){
    printf("\nThe temperature is bad!");
}
else{
    printf("\nThe temperature is good!");
}

printf("\n");

// !:

bool sun = false;

if(!sun){
    printf("\nIt's cloudy outside!");
}
else{
    printf("\nIt's sunny outside!");
}






    return 0;
}
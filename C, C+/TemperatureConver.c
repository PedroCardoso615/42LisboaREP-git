#include <stdio.h>
#include <ctype.h> //necessário para conversões de temperaturas, etc.

int main(){

    char unit;
    float temp;

    printf("Is the temperature in (C) or (F): \n");
    scanf("%c", &unit);

    unit = toupper(unit); //So the program can get precised anwsers even the user doesn't use caps lock.

    if(unit == 'C'){
        printf("Enter the temperature in Celsius: \n");
        scanf("%f", &temp);
        temp = (temp *  9 / 5) + 32;
        printf("The temperature in Farnheit is: %.1f.", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temperature in Farnheit: \n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celcius is: %.1f .", temp);
    }
    else{
        printf("%c is not a valid unit of measurement. \n", unit);
    }











    return 0;
}
#include <stdio.h>

//While Loop checks a condition, Then executes a block of code if condition is true.
//Do While Loops executes a block of code once, Then checks a condition.
//Neste caso só é possível sair do promt ou obter o resultado se fror dado um número negativo. Todos os números registados anes do número negativo são usados para a soma.

int main(){

int number = 0;
int sum = 0;

do{
    printf("Enter a # above 0: ");
    scanf("%d", &number);
    if(number > 0)
    {
        sum += number;
    }
}while(number > 0);

printf("sum: %d", sum);


    return 0;
}

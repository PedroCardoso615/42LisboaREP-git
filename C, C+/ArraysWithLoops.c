#include <stdio.h>

int main(){

    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

//Utiliza-se o 'sizeof' para calcular o numero de bytes de uma array e pega no sizeof de um elemento da array para conseguirmos dividir o numero total de bytes pelo mumero de bytes de um elemento para sabermos quantos elementos estão na array. 
//Ou seja, não é necessário estar constantemente a atualizar a função ex:'i < 5'.
    return 0;
}
#include <stdio.h>

//continue is used to skip a part of the code and keeps on the next iteration of the loop.
//break exists the loop.

int main(){

for(int i = 1; i <= 20; i++)
{
    if(i == 13)
    {
        continue; //passa o #13 e continua a contar até 20. Se fosse 'break' para de contar no #13.
    }
    printf("%d\n", i);
}






    return 0;
}
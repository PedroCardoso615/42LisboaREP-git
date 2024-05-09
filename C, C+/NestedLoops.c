#include <stdio.h>

//Nested Loops: Loop inside another Loop (For{(.;.;.){For(.;.;.)}}).

int main(){

int rows;
int columns;
char symbol;

printf("Enter the # of rows: ");
scanf("%d", &rows);

printf("Enter the # of columns: ");
scanf("%d", &columns);

scanf("\n");

printf("Enter a symbol to use: \n");
scanf("%c", &symbol);
scanf("%c");


for(int i = 1; i <= rows; i++)
{
    for(int j = 1; j <= columns; j++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}

    return 0;
}
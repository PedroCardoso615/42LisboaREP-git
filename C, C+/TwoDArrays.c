#include <stdio.h>
#include <string.h>

//2D Arrays are useful if you need a matrix, grid or table of data.

int main(){

int numbers [3][3];

int rows = sizeof(numbers)/sizeof(numbers[0]);
int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

printf("Number of Rows: %d\n", rows);
printf("Number of Columns: %d\n", columns);

numbers[0][0] = 1;
numbers[0][1] = 2;
numbers[0][2] = 3;
numbers[1][0] = 4;
numbers[1][1] = 5;
numbers[1][2] = 6;
numbers[2][0] = 7;
numbers[2][1] = 8;
numbers[2][2] = 9;

for(int i = 0; i < rows; i++)
{
    for(int j = 0; j < columns; j++)
    {
        printf("%d", numbers[i][j]);
    }
    printf("\n");

}

printf("\n");

char cars[][10] = {"Mustang", "Corvette", "Camaro"};

strcpy(cars[0], "Tesla");

for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
{
    printf("%s\n", cars[i]);
}

    return 0;
}
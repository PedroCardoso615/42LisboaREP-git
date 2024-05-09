#include <stdio.h>

int main()
{
    FILE *pF = fopen ("C:\\Users\\pedro\\OneDrive - Escola Superior de Hotelaria e Turismo do Estoril\\Desktop\\TestReadingFile.txt", "r");
    char buffer[1000];

    if(pF == NULL)
    {
        printf("Unable to open this file!\n");
    }
    else
    {
        while(fgets(buffer, 1000, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }
    
    fclose(pF);


    return 0;
}
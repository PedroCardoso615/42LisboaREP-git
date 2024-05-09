#include <stdio.h>

// W = Write, A = Append (Add text without overwritting), R = Read

int main()
{
    /*
    FILE *pF = fopen("C:\\Users\\pedro\\OneDrive - Escola Superior de Hotelaria e Turismo do Estoril\\Desktop\\writenfile.txt", "a");

    fprintf(pF, "Check WriteFiles Document to see who to write and read files.\n");

    fclose(pF);
    */
    
    
   
   if(remove("C:\\Users\\pedro\\OneDrive - Escola Superior de Hotelaria e Turismo do Estoril\\Desktop\\writenfile.txt") == 0)
   {
        printf("The file was deleted successfully.");
   }
   else
   {
        printf("The file wasn't deleted.");
   }
   



    return 0;
}
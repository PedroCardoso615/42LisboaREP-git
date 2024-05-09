#include <stdio.h>
#include <string.h> //Mandatory to work with string functions.

int main(){

char string1[] = "Pedro";
char string2[] = "Cardoso";

strncpy(string1, string2, 3);

printf("%s", string1);

    return 0;
}
//Ver doc Word para todas as funções string.
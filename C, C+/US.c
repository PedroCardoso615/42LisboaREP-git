#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod){
        *div = a / b;
        *mod = a % b;
}

int main() {
    int a = 10, b = 4;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);
    
    printf("Divisao: %d, Resto: %d\n", div, mod);

    return 0;
}


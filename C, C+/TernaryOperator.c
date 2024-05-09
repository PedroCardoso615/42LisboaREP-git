#include <stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
}

int main()
{

// Ternary Operator is a shortcut to if/else when assigning/returning a value.
// (Condition) ? value if true : value if false.
// Ex: return (x > y) ? x : y;

int max = findMax(5, 4);

printf("%d", max);

    return 0;
}
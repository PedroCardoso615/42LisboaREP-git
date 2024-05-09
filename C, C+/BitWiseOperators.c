#include <stdio.h>

//Bitwise Operators = special operators used in a bit level programming (Knowing binary is important for this topic).
// & = AND
// | = OR
// ^ = XOR
// << = Left Shift
// >> = Right Shift

int main()
{
int x = 6;  // 6 = 00000110
int y = 12;// 12 = 00001100
int z = 0; //  0 = 00000000

// Com a função AND(&) o programa, através dos números binários, vê se há o nº repetido na mesma linha no x e no y. Caso seja x e y tenham um 1 no mesmo local e adicionado um 1 no mesmo local no valor z.
// Com a função OR(|), é feita a mesma análise que na função AND(&), mas basta uma das linhas ter o nº1 para ser atribuído a z.
// Com a função XOR(^), é feita a mesma análise que nas outras duas funções mas só é atribuído o nº1 a z caso haja um dos valores que seja 1 e o outro 0. Ou seja, se forem valores iguais não é atribuído o nº1 a z.
// Com a função Left Shift(<<), é possível mover os bits para a esquerda as vezes que programar-mos. EX: z = x << 2; Irá mexer todos os bits de x 2 vzs para a esquerda.
// Com a função Left Shift(<<), é possível mover os bits para a direita as vezes que programar-mos. EX: z = x >> 2; Irá mexer todos os bits de x 2 vzs para a direita.

z = x & y;
printf("AND = %d\n", z); // z = 00000100

z = x | y;
printf("OR = %d\n", z); // z = 00001110

z = x ^ y;
printf("XOR = %d\n", z); // z = 00001010

z = x << 2;
printf("Left Shift = %d\n", z); // z = 00011000

z = y >> 2;
printf("Right Shift = %d\n", z); // z = 00000011



    return 0;
}
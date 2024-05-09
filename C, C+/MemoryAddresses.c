#include <stdio.h>

// Memory = an array of bytes within RAM (street);
// Memory Block = a single unit (byte) within memory, used to hold some value (person);
// Memory Address = the address of where a memory block is located (house address);
// Hexadecimal Numbers = 0-9 + A-F (0-1-2-3-4-5-6-7-8-9 and A-B-C-D-E-F);

int main()
{
int a = 'X';
double b = 'Y';
int c = 'Z';

printf("%d bytes\n", sizeof(a));
printf("%d bytes\n", sizeof(b));
printf("%d bytes\n", sizeof(c));

printf("%p\n", &a);
printf("%p\n", &b);
printf("%p\n", &c);

    return 0;
}
#include "main.h"
/*
*/void puts_half(char *str)
{
int x;
int c;

for (c = 0; str[c] != '\0'; c++)
{
}
for (x = ((c + 1) / 2); x < c; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}

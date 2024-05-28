#include "main.h"
/*
*/void puts2(char *str)
{
int x;
int c;
for (c = 0; str[c] != '\0'; c++)
{
}
c -= 1;
for (x = 0; x <= c; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
_putchar('\n');
}

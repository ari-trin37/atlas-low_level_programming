#include "main.h"

/*
 */void print_rev(char *s)
{
int x;
int c;

for (x = 0; s[x] != '\0'; x++)
{
}
for (c = x - 1; s[c] > 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}

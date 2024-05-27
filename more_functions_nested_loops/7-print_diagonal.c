#include "main.h"
/**
 * print_diagonal - printing diagonal line.
 * @n: new line
 *
 * Return: printed line
 */

void print_diagonal(int n)
{
int i;
int x;
if(n > 0)
{
for(i = 0; i < n; i++)
{
for(x = 0; x > i; x++)
{
_putchar(' ');
}

{
_putchar('\\');
_putchar('\n');
}

}


else
{
_putchar('\n');
}
}

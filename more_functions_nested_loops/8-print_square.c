#include "main.h"
/**
 * print_square - printing square.
 * @size: new line
 *
 * Return: creating one squares.
 */
void print_square(int size)
{
int i;
int x;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
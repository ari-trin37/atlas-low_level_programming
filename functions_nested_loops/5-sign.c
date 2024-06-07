#include "main.h"
/**
 * print_sign - function
 * @n : variable
 *
 * Return : returns one, c is a letter, lower or uppercase.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

   		return (1);
	}


	else if (n == 0)
{
	_putchar('0');
	}
	else
	{
_putchar('-');
return (-1);
	}
	return (0);
}


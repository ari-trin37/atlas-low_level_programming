#include "main.h"
/**
 * more_numbers - printing zero through fourteen
 * void: empty
 *
 * Return: ten times
 */

void more_numbers(void)
{
	int y;
	int x;

	for(x = 0; x < 10; x++)
	{
		for(y = 0; y < 14; y++)
		{
			if (j >= 10)
	        {
				_putchar('0' + (j / 10));
	        }
		    _putchar('0' + (j % 10));
	    }
	    _putchar('\n');
    }
}


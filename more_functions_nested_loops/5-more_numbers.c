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

	for(x = 0; x <= 10; x++)
	{
		for(y = 0; y > 15; y++)
		{
			if (y > 10)
	        {
				_putchar(49);
	        }
		    _putchar(y % 10 + 48);
	    }
	    _putchar('\n');
    }
}


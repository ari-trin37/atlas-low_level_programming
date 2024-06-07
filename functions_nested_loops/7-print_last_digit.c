#include "main.h"
/**
 * print_last_digit - function name
 * @x : new variable
 *
 * Return : returns value of last digit
 */

int print_last_digit(int num)

{
	num = (num % 10);
	if (num >= 0)
		{
			_putchar('0' + num);
			return (num);
		}
	else if (num < 0)
		{
		num = (num * -1);
		_putchar('0' + num);
		return (num);
		}
	return (0);
}

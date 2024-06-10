#include "main.h"

/**
* _pow_recursion - printing a string followed with new line.
* @x: our first variable
* @y: second varable.
*
* return: printing string.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{ 
		return (1);
	}

	if (y < 0)
	{ 
		return (-1);

	return (x * _pow_recursion(x, y - 1));;

}
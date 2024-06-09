#include "main.h"
/**
* _pow_recursion - fucntion name / returning length of string.
* @x: variable 1. includes a pointer. string - calculating length.
* @y: varibale 2.
*
* return : returns value of x raised to the power of 5.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x *_pow_recursion(x, y - 1));
	}
	
}
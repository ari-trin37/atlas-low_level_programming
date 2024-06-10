#include "main.h"
/**
* _sqrt_recursion - function name / returning length of string.
* _lumi_light - new function created.
* @n: variable given, includes a pointer. string - calculating length.
* @val: created new variable for 2nd prototype.
*
* Return: returning the length of a string
*/

int _lumi_light(int val, int n)
{
	if (n == val * val)
		return (val);
	else if (val > n)
		return (-1);

	return (_lumi_light(val + 1, n));
}

/**
* _sqrt_recursion - function name given.
* @n: our variable / where the sq. root will be calculated
*
* Return: either n or -1
*/

int _sqrt_recursion(int n)
{
		int val = 1;

		return (_lumi_light(val, n));
}

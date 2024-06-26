#include "main.h"
/**
* _lumi_light - new function created.
* @val: created new variable for 2nd prototype.
* @n: our first variable. sq root calculated from here.
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
* Return: either n or -1.
*/

int _sqrt_recursion(int n)
{
		int val = 1;

		return (_lumi_light(val, n));
}

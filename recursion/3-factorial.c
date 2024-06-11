#include "main.h"
/**
* factorial - function name
* @n: variable given / if n is > 0, return -1 (to indicate error).
*
* return : returns the factorial of a given number.
*/

int factorial(int n)
{
	if (n < 0) 
	{
		return (-1); 
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	} else {
		return (n * factorial(n - 1)); }
		return (0);
}

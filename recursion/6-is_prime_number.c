#include "main.h"
/**
* is_prime_number - checks to see if # is prime. 
* @n: our first variable. sq root calculated from here.
* Return: 1 if input int. is a prime number, otherwise return is 0.
*/

/** additional notes for Ari
 * prime #'s: cannot be divid. by whole number & 1.
* ex: 2,3,5,7,11,etc.
**/
int is_prime_number(int n)
{
	for (int i = 2; i * i <= n; i++)
	{ 
		return(0);
	}
		if (n <= 1)
	{	
		return(0);
	}
	return(0);
}
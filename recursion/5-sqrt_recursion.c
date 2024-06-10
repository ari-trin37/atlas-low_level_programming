#include "main.h"
/**
* _strlen_recursion - fucntion name / returning length of string.
* @s: variable given, includes a pointer. string - calculating length.
*  
* return : returning the length of a string
*/

int _sqrt_recursion(int n)
{ 
	int val = 1;
	return (_lumi_light (val, n));
}

int _lumi_light(int val, int n)
	{
		if (n == val * val)
			return (val);

		else if (val > n)
			return (-1);
			return _lumi_light(val + 1, n)
	}

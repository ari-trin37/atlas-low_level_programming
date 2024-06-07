#include "main.h"
/**
* _isalpha - function 
* @c : variable
*
* Return : returns one, c is a letter, lower or uppercase.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= "A" && <= "Z'))
		return 1;
	else
		return 0;
}

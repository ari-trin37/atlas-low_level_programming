#include "variadic_functions.h"
/**
 * print_strings - printing a string.
 * @separator:
 * @n: # of string arguments (follow as var. args. due to ...)
 * @...: variable # of strings
 * Return: checks if string is NULL, should print nil.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{ str = va_arg(args, const char *);

		if (str == NULL) 
		{
			printf("(nil)");
        }
			else
		{
            printf("%s", str);
        }

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}

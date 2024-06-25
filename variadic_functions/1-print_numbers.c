#include "variadic_functions.h"
/**
 * print_numbers - printing #'s w/ new line.
 * @separator: string printed between #'s.
 * @n: # of int's that'll be printed.
 * @...: # of int's (variable)
 * Return: printing set of #'s.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int x;

    va_start(args, n);

    for (x = 0; x < n; x++)
	{
        printf("%d", va_arg(args, int));

        if (separator != NULL && x < n - 1)
		{
            printf("%s", separator);
        }
    }

    printf("\n");

    va_end(args);
}

#include "variadic_functions.h"
#include "<stdarg.h>"
/**
 * print_all - 
 * @char: character length
 * @format: 
 *
 * Return:
 */

va_list args;
{
    int i = 0;
    char *str;
    char c;
    int num;
    float fnum;

    va_start(args, format);

    while (format && format[i])
	{
        if (format[i] == 'c')
		{
            c = va_arg(args, int);
            printf("%c", c);
        } else if (format[i] == 'i')

		{
            num = va_arg(args, int);
            printf("%d", num);
        }

		else if (format[i] == 'f')

		{
            fnum = va_arg(args, double);
            printf("%f", fnum);
        }

		else if (format[i] == 's')
		{
            str = va_arg(args, char *);
            if (str == NULL) {
                printf("(nil)");
            } else

			{
                printf("%s", str);
            }
        }
        i++;
    }

    printf("\n");

    va_end(args);
}

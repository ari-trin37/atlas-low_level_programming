#include "function_pointers.h"
/**
 * print_name - writing a function that prints a name.
 * @name: name of the function we're printing.
 * @char: passed as arg.
 * @f: function pointed to by 'f' used to print name, letter by letter.
 *
 * Return: return type is void.
 */

char *copy;

void _putchar(char c) {
    write(1, &c, 1);
}

char *_strdup(const char *str) {
    size_t len = 0;
    const char *tmp = str;
    while (*tmp++) {
        len++;
    }
	*copy = malloc(len + 1);
    if (copy == NULL) {
        return NULL;
    }
    char *ptr = copy;
    while (*str) {
        *ptr++ = *str++;
    }
    *ptr = '\0';
    return copy;
}

void print_name(char *name, void (*f)(char)) {
    char *copy = _strdup(name);
    if (copy == NULL) {
        return;
    }
    while (*copy) {
        f(*copy++);
    }
    free(copy);
}

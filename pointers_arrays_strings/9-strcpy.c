#include "main.h"
/*
*/char *_strcpy(char *dest, char *src)
{
int x = 0;
do {
*(dest + x) = *(src + x);
} while (*(src + x++));
return (dest);
}

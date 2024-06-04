#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to s.
 * @a: para one
 * 
 * Return: returns pointer to memory area s.
 */

void print_chessboard(char (*a)[8])

{
int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}

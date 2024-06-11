#include "main.h"
/**
 * @char - function name
 * @char * : parameter one
 *
 * Return: nothing
 */

char *leet(char *s) {
    char *str = s;
    char *letters = "aeotlAEOTL";
    char *replacements = "43170143071";
    
    int i, j;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; letters[j] != '\0'; j++) {
            if (s[i] == letters[j] || s[i] == letters[j] - ('a'-'A')) {
                s[i] = replacements[j];
                break; 
            }
        }
    }

    return str;
}

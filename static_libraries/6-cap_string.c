#include "main.h"
#include <ctype.h>
/**
 * string_toupper - function name
 * @char * - para one
 *
 * Return: nothing
 */

 char *cap_string(char *str) {
    int capitalize_next = 1;
    int  i;

 for (i = 0; str[i] != '\0'; i++) {
        if (capitalize_next && islower((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            capitalize_next = 0; 
} 
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}') {
            capitalize_next = 1;
} 
} 
                return str; 
}   

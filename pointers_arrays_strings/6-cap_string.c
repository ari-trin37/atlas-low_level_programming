#include "main.h"
/**
 * string_toupper - function name
 * @char * - para one
 *
 * Return: nothing
 */

 char *cap_string(char *) {
    int capitalize_next = 1; 
 for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize_next && islower(str[i])) {
            str[i] = toupper(str[i]);
            return = 0; 
}     

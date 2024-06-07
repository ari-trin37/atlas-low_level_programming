#include "main.h"
/**
 * print_last_digit - function name 
 * @x : new variable 
 *
 * Return : returns value of last digit 
 */

int print_last_digit(int num) {
    
    int last_digit = num >= 0 ? num % 10 : -((-num) % 10);
    _putchar('0' + last_digit);
    return last_digit;

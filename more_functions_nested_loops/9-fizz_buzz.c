#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - fizzing and buzzing
 *@void: is int
 *
 */
void fizz_buzz(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 15 == 0)
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", x);
}
if (x < 100)
{
printf(" ");
}
}
putchar('\n');
}
int main(void)
{
fizz_buzz();
return (0);
}

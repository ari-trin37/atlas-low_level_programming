#include "main.h"
/*
*/int _strlen(char *s)
{
int a = 0;
int c = 0;
while (c <= a)
{
if (s[a] != '\0')
{
a++;
}
else if (s[a] == '\0')
{
return (a);
}
c++;
}
return (a);
}

# include "main.h"
/**
 * 0-whatsmyname - file name
 * @argc: # of arguments
 * @argv: vector (data structure container) of strings
 *
 * Return: void
 **/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

# include "main.h"
/**
 * 1-args.c - write a program that prints # of arg's passed into it.
 * @argc: argument count / int. variable that stores # of arguments passed to program.
 * @argv: argument vector / array of pointers to arrays of char. objects
 *
 * Return: void
 **/


int main(int argc, char *argv[])
{

	(void)argc;
	(void)argv;

	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

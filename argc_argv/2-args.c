#include "main.h"

/**
 * 2-args.c - write a program that prints all arguments it receives.
 * @argc: argument count / int. variable that stores # of arguments passed to program.
 * @argv: argument vector / array of pointers to arrays of char. objects
 *
 * Return: void
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}

	return 0;
}

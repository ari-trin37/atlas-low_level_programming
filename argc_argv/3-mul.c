# include "main.h"
/**
 * 3-mul.c - write a program that multiplies two #'s.
 * @argc: argument count / int. variable that stores # of arguments passed to program.
 * @argv: argument vector / array of pointers to arrays of char. objects
 *
 * Return: 1
 **/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

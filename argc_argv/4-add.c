# include "main.h"
/**
 * 2-args.c - write a program that prints all arguments it receives.
 * @argc: argument count / int. variable that stores # of arguments passed to program.
 * @argv: argument vector / array of pointers to arrays of char. objects
 *
 * Return: void
 **/

int main(int argc, char *argv[])
{
	int num;
	int sum;
	int i;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

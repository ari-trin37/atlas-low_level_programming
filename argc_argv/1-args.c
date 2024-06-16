# include "main.h"

/*
*/


int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	int i;
	
	for (i = 0; i < argc; i++) 
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}

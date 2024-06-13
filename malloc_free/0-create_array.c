#include "main.h"
/**
 * create_array - creating array w/ malloc
 * @size: 1st para.
 * @c: 2nd para/variable/
 *
 * Return: NULL if size is 0, or returns pointer to array.
 **/


char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array = NULL; /* declare here to not mix declares and code */

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char)); /* initialize after size check */

	if (array == NULL)
	{
		return (NULL);
	}

	{

		for (x = 0; x < size; x++)
		{
			array[x] = c;
		}

	}

	return(array);
}

/*
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }

    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
*/
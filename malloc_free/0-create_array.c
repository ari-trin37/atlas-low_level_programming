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
	if (size == 0)
	{ 
		return(NULL);
	}

	char *array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return(NULL);
	}

	{
		for (unsigned int x = 0; x < size; i++)
		{
			array[x] = c
		}
	}

	return(array);
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
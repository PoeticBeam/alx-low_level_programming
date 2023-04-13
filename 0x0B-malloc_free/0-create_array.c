#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates char array of size 'size'
 * @size: int size of array
 * @c: character to be initialized
 *
 * Return: NULL if size == 0; pointer to array if successful
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *my_array = (char *)malloc(size * sizeof(char));
				
	for (i = 0; i <= size; i++)
	{
		if (size == 0)
			return (NULL);
		my_array[i] = c;
	}
	return (my_array);
	free(my_array);
}

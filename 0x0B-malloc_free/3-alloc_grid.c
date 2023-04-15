#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns pointer to 2 dim-array
 * of integers
 * @width: array width
 * @height: array height
 *
 * Return: NULL or 2_dim
 */

int **alloc_grid(int width, int height)
{
	int **_2dim;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	_2dim = malloc(sizeof(int *) * height);

	if (_2dim == NULL)
		return (NULL);

	/**
	 * remember it's an array and we init i = 0,
	 * we need condition to be less than array value
	 */
	for (i = 0; i < height; i++)
	{
		_2dim[i] = malloc(sizeof(int) * width);

		if (_2dim[i] == NULL)
		{
			for (; i >= 0; i--)
				free(_2dim[i]);
			free(_2dim);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			_2dim[i][j] = 0;
	}
	return (_2dim);
}

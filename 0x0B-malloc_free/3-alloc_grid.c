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

	if (width == 0 || height == 0)
		return (NULL);
	_2dim = (int **)malloc(sizeof(int) * height);

	if (_2dim == NULL || _2dim == 0)
		return (NULL);

	for (i = 0; i <= height; i++)
	{
		_2dim[i] = (int *)malloc(sizeof(int) * width);

		if (_2dim[i] == NULL)
		{
		for (i = 0; i >= 0; i--)
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

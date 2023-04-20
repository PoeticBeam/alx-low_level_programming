#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array of elements
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	action(array[size]);
}

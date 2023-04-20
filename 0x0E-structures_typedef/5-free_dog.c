#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: struct/dot_t dog ID
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable of tyoe struct dog
 *
 * struct dog - check dog.h
 *
 * @d: Dog ID
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

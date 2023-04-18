#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * struct dog - check the header file
 * @d: dog ID
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (%s)\n", "nil");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 1)
		printf("Age: (%s)\n", "nil");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (%s)\n", "nil");
	else
		printf("Owner: %s\n", d->owner);
}

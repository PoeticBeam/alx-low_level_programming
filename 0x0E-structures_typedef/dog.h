#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data set
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * my_dog - typedef for struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif

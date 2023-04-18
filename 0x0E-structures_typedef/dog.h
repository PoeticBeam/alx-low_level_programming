#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data set
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * my_dog - typedef for struct dog
 * dog_t - typedef for struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

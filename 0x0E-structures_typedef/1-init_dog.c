#include "dog.h"
#define NULL 0

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to be initialized
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

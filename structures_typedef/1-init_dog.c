#include "dog.h"
#include <stlib.h>

/**
 * init_dog - initialize a var of type
 * @d: pointer to struct dog initialize
 * @name: var
 * @age: var
 * @owner: var
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

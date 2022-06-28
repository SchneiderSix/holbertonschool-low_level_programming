#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a var of type
 * @d: pointer to struct dog initialize
 * @name: var
 * @age: var
 * @owner: var
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

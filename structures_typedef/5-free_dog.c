#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - explicit name
 * @d: pointer
 * Return: no
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	free(d->name);
	free(d->owner);
	free(d);
}

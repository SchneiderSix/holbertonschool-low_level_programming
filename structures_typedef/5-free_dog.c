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
	free(name);
	free(age);
	free(owner);
	free(d);
}

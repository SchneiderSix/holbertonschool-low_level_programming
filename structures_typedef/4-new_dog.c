#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create new dog
 * @name: var
 * @age: var
 * @owner: var
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bobby;
	char *newname, *newowner;
	int i, iname, iowner;

	bobby = malloc(sizeof(dog_t));
	if (bobby == NULL)
	{
		return (NULL);
	}
	for (iname = 0; name[iname] != '\0'; iname++)
	{
	}
	for (iowner = 0; owner[iowner] != '\0'; iowner++)
	{
	}
	newname = molloc(sizeof(char) * iname + 1);
	if (newname == NULL)
	{
		free(bobby);
		return (NULL);
	}
	for (i = 0; i <= iname; i++)
	{
		newname[i] = name[i];
	}
	newowner = molloc(sizeof(char) * iowner + 1);
	if (newowner == NULL)
	{
		free(bobby);
		free(newowner);
		return (NULL);
	}
	for (i = 0; i <= iowner; i++)
	{
		newowner[i] = owner[i];
	}

	bobby->name = newname;
	bobby->age = age;
	bobby->owner = newowner;

}

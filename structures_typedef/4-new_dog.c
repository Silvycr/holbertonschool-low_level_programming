#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog.
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perrito;
	int z, lname, lowner;

	perrito = malloc(sizeof(*perrito));
	if (perrito == NULL || !(name) || !(owner))
	{
		free(perrito);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	perrito->name = malloc(lname + 1);
	perrito->owner = malloc(lowner + 1);

	if (!(perrito->name) || !(perrito->owner))
	{
		free(perrito->owner);
		free(perrito->name);
		free(perrito);
		return (NULL);
	}

	for (z = 0; z < lname; z++)
		perrito->name[z] = name[z];
	perrito->name[z] = '\0';

	perrito->age = age;

	for (z = 0; z < lowner; z++)
		perrito->owner[z] = owner[z];
	perrito->owner[z] = '\0';

	return (perrito);
}

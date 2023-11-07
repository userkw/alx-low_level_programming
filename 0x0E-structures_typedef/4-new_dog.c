#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a nw dog
 * @name: dgg name
 * @age: dgg age
 * @owner: dog owner
 *
 * Return: pointer to the nw dog or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		if (new_dog ->name == NULL)
			free(new_dog->name);
		if (new_dog->owner == NULL)
			free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	return (new_dog);
}

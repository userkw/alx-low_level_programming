#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: A pointer to the new dog or NULL 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Use tabs for indentation */
	dog_t *nw_dg_pt;
	char *nm_cp, *owner_cp;

	nw_dg_pt = malloc(sizeof(dog_t));

	if (nw_dg_pt == NULL)
		return (NULL);

	nm_cp = malloc(strlen(name) + 1);
	owner_cp = malloc(strlen(owner) + 1);

	if (nm_cp == NULL || owner_cp == NULL)
	{
		free(nm_cp);
		free(owner_cp);
		free(nw_dg_pt);
		return (NULL);
	}

	strcpy(nm_cp, name);
	strcpy(owner_cp, owner);

	nw_dg_pt->name = nm_cp;
	nw_dg_pt->age = age;
	nw_dg_pt->owner = owner_cp;

	return (nw_dg_pt);
}

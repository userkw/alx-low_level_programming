#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc, exits if allocation fails.
 * @b: The size of the memory block to allocate.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}

#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, init to 0
 * @nmemb: Number of elmts in the array
 * @size: Size of each elmnt
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)pt + a) = 0;
	}

	return (pt);
}

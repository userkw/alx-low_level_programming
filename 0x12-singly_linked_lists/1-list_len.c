#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elms
 * @h: pointer
 *
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}

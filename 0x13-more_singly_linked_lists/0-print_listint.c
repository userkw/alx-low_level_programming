#include "lists.h"
/**
 * print_listint - prints all
 * @h: pointer
 *
 * Return: the nbr of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}

	return (cont);
}

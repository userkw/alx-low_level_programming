#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 * @head: pointer
 * @n: val
 *
 * Return: the address of the new elem, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw, *tmp;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = nw;

	return (nw);
}

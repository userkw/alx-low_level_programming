#include "lists.h"

/**
 * reverse_listint - reverses
 * @head: head
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pp;
	listint_t *nn;

	pp = NULL;
	nn = NULL;

	while (*head != NULL)
	{
		nn = (*head)->next;
		(*head)->next = pp;
		pp = *head;
		*head = nn;
	}

	*head = pp;
	return (*head);
}

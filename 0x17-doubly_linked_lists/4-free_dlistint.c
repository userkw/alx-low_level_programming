#include "lists.h"

/**
 * free_dlistint - frees
 * @head: pointer
 * Return: nothg
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}

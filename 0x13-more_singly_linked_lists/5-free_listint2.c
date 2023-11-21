#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

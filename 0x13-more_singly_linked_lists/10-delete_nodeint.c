#include "lists.h"

/**
 * delete_nodeint_at_index - deletes
 * @head: head
 * @index: index
 *
 * Return: 1 if it succeeded, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *preev;
	listint_t *next;

	preev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			preev = preev->next;
		}
	}

	if (preev == NULL || (preev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = preev->next;

	if (index != 0)
	{
		preev->next = next->next;
		free(next);
	}
	else
	{
		free(preev);
		*head = next;
	}

	return (1);
}

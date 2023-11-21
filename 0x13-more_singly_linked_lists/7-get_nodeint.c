#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: head
 * @index: index
 *
 * Return: nth node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}

	return (head);
}

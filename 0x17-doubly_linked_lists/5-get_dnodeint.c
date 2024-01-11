#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth
 * @head: pointer
 * @index: index
 * Return: nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *t;

	s = 0;
	if (head == NULL)
	return (NULL);

	t = head;
	while (tmp)
	{
	if (index == s)
	return (t);
	s++;
	t = t->next;
	}
	return (NULL);
}

#include "lists.h"

/**
 * sum_listint - returns the sum
 * a linked list.
 * @head: head
 *
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int summ;

	summ = 0;
	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}

	return (summ);
}

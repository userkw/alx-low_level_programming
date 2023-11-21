#include "lists.h"

/**
 * free_listp2 - frees
 * @head: head
 *
 * Return: void
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees
 * @h: head
 *
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *ad;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		ad = hptr;

		while (ad->next != NULL)
		{
			ad = ad->next;
			if (*h == ad->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}

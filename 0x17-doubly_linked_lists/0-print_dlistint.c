#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t
 *
 * @h: head
 * Return: number
 */
size_t print_dlistint(const dlistint_t *h)
{
    int c;

    c = 0;

    if (h == NULL)
        return (c);

    while (h->prev != NULL)
        h = h->prev;

    while (h->next != NULL)
    {
        printf("%d\n", h->n);
        c++;
        h = h->next;
    }

    printf("%d\n", h->n);
    c++;

    return (c);
}

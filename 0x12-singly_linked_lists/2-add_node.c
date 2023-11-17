#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer
 * @str: new string
 *
 * Return: the address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = (*head);
	(*head) = nw;

	return (*head);
}

#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size
 *
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_tble;
	unsigned long int ae;

	h_tble = malloc(sizeof(hash_table_t));
	if (h_tble == NULL)
		return (NULL);
	h_tble->size = size;
	h_tble->array = malloc(size * sizeof(hash_node_t *));
	if (h_tble->array == NULL)
	{
		free(h_tble);
		return (NULL);
	}
	for (ae = 0; ae < size; ae++)
		h_tble->array[ae] = NULL;
	return (h_tble);
}

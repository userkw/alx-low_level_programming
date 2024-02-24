#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size
 *
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *h_tbl;
    unsigned long int ar;

    h_tbl = malloc(sizeof(hash_table_t));
    if (h_tbl == NULL)
        return (NULL);
    h_tbl->size = size;
    h_tbl->array = malloc(size * sizeof(hash_node_t *));
    if (h_tbl->array == NULL)
    {
        free(h_tbl);
        return (NULL);
    }
    for (ar = 0; ar < size; ar++)
        h_tbl->array[ar] = NULL;
    return (h_tbl);
}

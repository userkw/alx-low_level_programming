#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value
 * @ht: table to retrieve
 * @key: key
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int ind;
    hash_node_t *tpp;

    if (ht == NULL || ht->array == NULL || ht->size == 0 ||
        key == NULL || strlen(key) == 0)
        return (NULL);
    ind = key_index((const unsigned char *)key, ht->size);
    tpp = ht->array[ind];
    while (tpp != NULL)
    {
        if (strcmp(tpp->key, key) == 0)
            return (tpp->value);
        tpp = tpp->next;
    }
    return (NULL);
}

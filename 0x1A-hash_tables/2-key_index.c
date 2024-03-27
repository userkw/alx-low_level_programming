#include "hash_tables.h"

/**
 * key_index - gives the ind
 * @key: key
 * @size: size
 *
 * Return: ind
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

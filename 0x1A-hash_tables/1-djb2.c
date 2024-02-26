#include "hash_tables.h"

/**
 * hash_djb2 - implemen
 * @str: str
 *
 * Return: hash val
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int cb;

	hash = 5381;
	while ((cb = *str++))
	{
		hash = ((hash << 5) + hash) + cb; /* hash * 33 + cb */
	}
	return (hash);
}

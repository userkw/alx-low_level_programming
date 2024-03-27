#include "hash_tables.h"

/**
 * hash_table_print - prints a hash
 * @ht: hash tabl
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *tp;
	char flg = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		tp = ht->array[a];
		while (tp != NULL)
		{
			if (flg == 1)
				printf(", ");
			printf("'%s': '%s'", tp->key, tp->value);
			flg = 1;
			tp = tp->next;
		}
	}
	printf("}\n");
}

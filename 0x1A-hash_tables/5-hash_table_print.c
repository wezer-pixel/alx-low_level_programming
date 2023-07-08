#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *b;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");

	for (a = 0; a < ht->size; a++)
	{
		b = ht->array[a];
		while (b != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", b->key, b->value);
			flag = 1;
			b = b->next;
		}
	}
	printf("}\n");
}

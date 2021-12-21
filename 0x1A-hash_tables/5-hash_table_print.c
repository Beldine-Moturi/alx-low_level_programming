#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: the hash table to be printed
 *
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			count++;
		}
	}
	printf("}\n");
}

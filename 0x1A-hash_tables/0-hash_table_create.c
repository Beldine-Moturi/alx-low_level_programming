#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *
 *@size: the size of the array of the hash table
 *Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table1;
	unsigned long int i;

	table1 = malloc(sizeof(hash_table_t));
	if (table1 == NULL)
		return (NULL);

	table1->size = size;
	table1->array = malloc(sizeof(hash_node_t *) * size);
	if (table1->array == NULL)
		return NULL;

	for (i = 0; i < size; i++)
		table1->array[i] = NULL;

	return (table1);
}

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
	hash_node_t *my_array;

	table1 = malloc(sizeof(hash_table_t));
	if (table1 == NULL)
		return (NULL);

	my_array = malloc(sizeof(hash_node_t) * size);
	if (my_array == NULL)
		return (NULL);

	table1->size = size;
	table1->array = &my_array;

	return (table1);
}

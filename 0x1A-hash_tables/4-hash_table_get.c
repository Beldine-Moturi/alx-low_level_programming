#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *                 from a hash table
 *@ht: the hash table where the value will be retrieved from
 *@key: the key of the value we are looking for
 *
 *Return: the value associated with the element
 *        or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];

	while (node != NULL)
	{
		if (node->key == key)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

#include "hash_tables.h"

/**
 *insert_node - inserts a node at a particular index in a hash table
 *@array: the array in the hash table
 *@ix: the index to insert the node at
 *@node: the node to insert in the hash table
 *
 *Return: void
 */

int insert_node(hash_node_t **array, unsigned long int ix, hash_node_t *node)
{
	hash_node_t *head;

	if (array[ix] == NULL)
		array[ix] = node;
	else
	{
		head = array[ix];

		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = node;
	}
	return (1);
}

/**
 *hash_table_set - adds an element to a hash table
 *@ht: the hash table to add elements to
 *@key: the unique key of the data be added
 *@value: the value of the data to be added
 *
 *Return: 1 if the function succeeded, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned long int size;
	hash_node_t **array;

	size = ht->size;
	array = ht->array;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;

	index = key_index((const unsigned char *)key, size);

	insert_node(array, index, node);

	return (1);
}

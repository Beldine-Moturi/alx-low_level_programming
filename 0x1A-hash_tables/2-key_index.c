#include "hash_tables.h"

/**
 *key_index - returns the index(in a hash table) of a key
 *@key: the key to generate index for
 *@size: the size of the hash table array
 *
 *Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}

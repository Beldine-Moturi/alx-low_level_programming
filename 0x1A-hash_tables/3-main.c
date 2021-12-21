#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 hetairas collides with mentioner
heliotropes collides with neurospora
depravement collides with serafins
stylist collides with subgenera
joyful collides with synaphea
redescribed collides with urites
dram collides with vivency
*/
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(500);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "cool");
	hash_table_set(ht, "heliotropes", "cool");
	hash_table_set(ht, "neurospora", "cool");
	hash_table_set(ht, "stylist", "cool");
	hash_table_set(ht, "subgenera", "cool");
	return (EXIT_SUCCESS);
}

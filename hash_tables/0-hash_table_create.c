#include "hash_tables.h"

/**
* hash_table_create - creates a ht
* @size: size of array
* Return: p to new ht
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newht;
	unsigned long int i;

	newht = malloc(sizeof(hash_table_t));
	if (!newht)
		return (NULL);
	newht->size = size;
	newht->array = malloc(sizeof((hash_node_t *) * size));
	if (!newht->array)
	{
		free(newht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newht->array = NULL;
	}
	return (newht);
}

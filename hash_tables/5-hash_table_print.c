#include "hash_tables.h"

/**
* hash_table_print - print keys and values of ht
* @ht: hash table
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, j = 0;

	if (!ht)
	{
		return (NULL);
	}
	while (ht->array[j])
	{
		for (i = 0; ht->array[i] != '\0'; i++)
		{
			printf("%s:%s\n", ht->array[i]->key, ht->array[i]->value);
		}
		ht->array[j] = ht->array[j]->next;
	}
}

#include "hash_tables.h"

/**
* hash_table_print - print keys and values of ht
* @ht: hash table
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; ht->size != '\0'; i++)
	{
		while(ht->array[i])
		{
			printf("'%s' : '%s'\n", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
}

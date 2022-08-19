#include "hash_tables.h"

/**
* hash_table_print - print keys and values of ht
* @ht: hash table
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int coma = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (coma == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			coma = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}

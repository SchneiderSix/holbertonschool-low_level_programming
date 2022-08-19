#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			free(ht->array[i]->key);
            free(ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
    free(ht);
}

#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int a;

	a = 0;
	for(a = 0; a < ht->size; a++)
	{
		tmp = ht->array[a];
		if (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}

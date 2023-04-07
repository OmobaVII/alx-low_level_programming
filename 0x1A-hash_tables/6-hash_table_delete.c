#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *temp;
	unsigned long int a;

	if (ht == NULL)
	{
		return;
	}
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	a = 0;
	for (a = 0; a < ht->size; a++)
	{
		tmp = ht->array[a];
		while (tmp != NULL)
		{
			temp = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = temp;
		}
	}
	free(ht->array);
	free(ht);
}

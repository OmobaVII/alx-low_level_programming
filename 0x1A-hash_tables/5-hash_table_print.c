#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int a, first;

	a = 0;
	first = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		node = ht->array[a];
		if (node != NULL)
		{
			while (node != NULL)
			{
				if (!first)
				{
					printf(", ");
				}
				printf("'%s': '%s'", node->key, node->value);
				first = 0;
				node = node->next;
			}
		}
	}
	printf("}\n");
}

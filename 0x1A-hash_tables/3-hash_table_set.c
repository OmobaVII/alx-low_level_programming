#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to add the element to
 * @key: the key of the element we want to add
 * @value: the value associated with the key
 * Return: 1 for success and 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	int a;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	a = hash_djb2((const unsigned char*) key) % ht->size;

	current_node = ht->array[a];
	if (current_node == NULL)
	{
		ht->array[a] = new_node;
	}
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}

	return (1);
}

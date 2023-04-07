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
	hash_node_t *new_node, *current_node, *replacement_node;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[idx];
	replacement_node = NULL;
	while (current_node != NULL && strcmp(current_node->key, key) != 0)
	{
		replacement_node = current_node;
		current_node = current_node->next;
	}
	if (current_node != NULL)
	{
		free(current_node->value);
		current_node->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (replacement_node == NULL)
	{
		ht->array[idx] = new_node;
	}
	else
	{
		replacement_node->next = new_node;
	}
	return (1);
}

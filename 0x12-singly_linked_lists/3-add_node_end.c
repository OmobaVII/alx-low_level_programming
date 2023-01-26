#include "lists.h"

/**
 * lenght_of_string - used to get the length of a string
 * @str: the string
 * Return: the lenght of the string
 */
int lenght_of_string(const char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	return (a);
}
/**
 * add_node_end - a function that adds a new node at the end
 * of a singly linked list
 * @head: the new node
 * @str: the new node str
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = lenght_of_string(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}

	return (new);
}



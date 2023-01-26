#include "lists.h"

/**
 * lenght_of_string - calculates the lenght of a string
 * @str: the string in question
 * Return: the lenght of a string
 */

int lenght_of_string(const char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	return (a);
}
/**
 * add_node - a function that adds a new node at the beginning
 * of a singly linked list
 * @head: the singly linked list
 * @str: a data in the singly linked list
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}
	if (strdup(str) == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = lenght_of_string(str);

	if (head == NULL)
		new->next = NULL;
	if (head != NULL)
		new->next = *head;
	*head = new;

	return (new);
}

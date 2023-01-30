#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns a particular
 * node of a singly linked list
 * @head: the singly linked list
 * @index: is the number of node to return
 * Return: the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;


	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	if (count < index)
		return (NULL);
	count = 0;
	ptr = head;
	while (count < index)
	{
		ptr = ptr->next;
		count++;
	}
	return (ptr);

}

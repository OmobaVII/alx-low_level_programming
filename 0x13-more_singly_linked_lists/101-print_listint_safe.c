#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a list
 * @head: the singly linked list
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	int nodes = 0;
	int a = 0;

	current = head;
	temp = head;
	while (current != NULL)
	{
		while (temp != current)
		{
			if (temp->next == current)
			{
				a = 1;
				break;
			}
			temp = temp->next;
		}
	if (a == 1)
	{
		if (temp == current)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	else
	{
		nodes++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	if (head == NULL)
	{
		exit(98);
	}
	}
	return (nodes);
}

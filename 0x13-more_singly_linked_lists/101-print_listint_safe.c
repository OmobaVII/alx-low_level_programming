#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * mark_node - a function that marks the nodes visited
 * @node: the node visited
 * @visited: a pointer to the visited node
 * Return: 0 or 1.
 */
int mark_node(listint_t *node, int *visited)
{
	if (visited[node->n] == 1)
	{
		return (1);
	}
	visited[node->n] = 1;
	return (0);
}
/**
 * print_list - a function used to print a list
 * @head: the list to print
 * @visited: a flag to mark a list that has been printed
 * Return: void
 */
int print_list(const listint_t *head, int *visited)
{
	const listint_t *current = head;
	int nodes = 0;

	while (current != NULL)
	{
		if (mark_node((listint_t *)current, visited) == 1)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			break;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		current = current->next;
	}
	return (nodes);
}
/**
 * print_listint_safe - a function that prints a list including those in a loop
 * @head: the singly linked list to print
 * Return: the total number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int visited[10001] = {0};

	return (print_list(head, visited));
}


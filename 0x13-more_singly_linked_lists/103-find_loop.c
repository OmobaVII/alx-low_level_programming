#include "lists.h"

/**
 * find_listint_loop - a function that finds a loop in a list
 * @head: the list
 * Return: the address where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	if (slow == NULL)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (fast);
		}
	}
	return (NULL);
}

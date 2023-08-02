#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *add_node = head;

	while (add_node)
	{
		count += add_node->n;
		add_node = add_node->next;
	}

	return (count);
}

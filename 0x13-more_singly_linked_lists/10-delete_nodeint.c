#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;
	prev = NULL;
	for (i = 0; curr != NULL && i < index; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);
	if (prev != NULL)
		prev->next = curr->next;
	else
		*head = curr->next;
	free(curr);
	return (1);
}

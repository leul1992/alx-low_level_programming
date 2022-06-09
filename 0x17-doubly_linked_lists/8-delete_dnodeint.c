#include "lists.h"

/**
 * delete_dnodeint_at_index-delete node at specified index
 * @head: start of the list
 * @index: index of node to delete
 * Return: 1 success, -1 failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (-1);
	current = *head;
	if (current == NULL)
		return (-1);
	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (-1);
	}
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
	}
	return (1);
}


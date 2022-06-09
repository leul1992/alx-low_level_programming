#include "lists.h"
/**
 * get_dnodeint_at_index-return the nth node
 * @head: start of the node
 * @index: the position to be returned
 * Return: the list at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}

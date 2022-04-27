#include "lists.h"
/**
 * get_nodeint_at_index-return nth node of list
 * @head: the head of the list
 * @index: the position of the node
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;
	while (i != index)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		return (current);
	}
	return (NULL);
}

#include "lists.h"
/**
 * delete_nodeint_at_index-deletes node at a position
 * @head:the head of the list
 * @index:the position to be deleted
 * Return: 1(success) or 0(failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cur, *curprev;

	curprev = *head;
	while (i != index - 1)
	{
		if (curprev == NULL)
		{
			return (0);
		}
		curprev = curprev->next;
		i++;
	}
	cur = curprev->next;
	if (cur == NULL)
	{
		return (0);
	}
	if (cur->next == NULL)
	{
		curprev->next = NULL;
		return (1);
	}
	else
	{
		curprev->next = cur->next;
		return (1);
	}
}

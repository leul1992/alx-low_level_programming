#include "lists.h"
/**
 * insert_nodeint_at_index-insert node at a given position
 * @head: head of the list
 * @idx:the positon to be inserted
 * @n:the value to be inserted
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *cur, *curnxt, *new;

	cur = *head;
	while (i != idx - 1)
	{
		cur = cur->next;
		i++;
	}
	curnxt = cur->next;
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL || (curnxt == NULL && cur == NULL))
	{
		free(new);
		return (NULL);
	}
	cur->next = new;
	new->next = curnxt;
	return (new);
}

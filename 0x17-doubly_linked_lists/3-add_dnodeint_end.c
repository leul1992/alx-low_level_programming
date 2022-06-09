#include "lists.h"
/**
 * add_dnodeint_end-add node at the end
 * @head: the start of the list
 * @n: the new data to be added
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = current;

	if (current)
		current->next = new;
	else
		*head = new;

	return (new);
}

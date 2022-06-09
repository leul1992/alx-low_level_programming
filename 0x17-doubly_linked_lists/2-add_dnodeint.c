#include "lists.h"

/**
 * *add_dnodeint - adds a node to a linked list head
 * @head: start of the list
 * @n: the data to add
 * Return: number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
    new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}

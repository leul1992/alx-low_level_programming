#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end-add new node at the end
 * @head:the head of the list
 * @n:the data to be inserted
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	while (temp != NULL)
	{
		temp = temp->next;
	}
	new->n = (int)(n);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	temp->next = new;
	return (new);

}

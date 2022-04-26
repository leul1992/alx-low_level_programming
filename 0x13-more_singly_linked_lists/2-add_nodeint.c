#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint-add node at the beginnig of list
 * @head:the first elemetn of the list
 * @n:the data to add
 * Return: the new added element's address or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}

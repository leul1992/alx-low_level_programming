#include "lists.h"
#include <string.h>
/**
 * add_node-adds a new node at the beginning of a list
 * @head:pointer to the start of the list
 * @str:the data to be added
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		new->len++;
		i++;
	}
	new->next = *head;
	*head = new;
	return (new);
}

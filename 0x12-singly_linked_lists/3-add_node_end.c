#include "lists.h"
#include <string.h>
/**
 * add_node_end-add a node at the end
 * @head:the first data in the list
 * @str:the data to be inserted
 * Return:address of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));

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
	}
	while (temp->str != NULL)
		temp = temp->next;
	temp->next =new;
	return (new);

}

#include "lists.h"
/**
 * reverse_listin-reverses the list
 * @head:the head of the list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *cur;

	cur = *head;
	cur = cur->next;
	temp = cur->next;
	if (*head == NULL)
		return (*head);
	else if (cur == NULL)
		return (*head);
	else if (temp == NULL)
	{
		cur->next = *head;
		*head = cur;
	}
	else
	{
		while (cur != NULL)
		{
			cur->next = *head;
			*head = cur;
			cur = temp;
			temp = temp->next;
		}
	}
	return (*head);
}

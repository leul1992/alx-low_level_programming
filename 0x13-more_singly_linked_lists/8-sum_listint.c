#include "lists.h"
/**
 * sum_listint-returns the sum of all the data
 * @head: the head of the list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

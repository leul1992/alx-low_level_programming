#include "lists.h"

/**
 * sum_dlistint-return sum of datas in the list
 * @head: start of the list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}

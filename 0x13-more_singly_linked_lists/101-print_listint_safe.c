#include "lists.h"
/**
 * print_listint_safe-print list
 * @head: head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur;
	int i = 0;

	cur = head;
	while (cur)
	{
		printf("[%p] %i\n", &(cur->n), cur->n);
		i++;
		cur = cur->next;
	}
	if (cur == NULL)
		exit(98);
	return (i);
}

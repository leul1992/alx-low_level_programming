#include "lists.h"
/**
 * list_len-return number of elements in  a linked list
 * @h: the list
 * Return: number of list
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		n++;
		list = list->next;
	}
	return (n);
}

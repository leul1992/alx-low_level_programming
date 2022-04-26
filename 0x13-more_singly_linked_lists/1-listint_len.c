#include "lists.h"
/**
 * listint_len-return number of elements in a list
 * @h:pointer to the list
 * Return:int
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

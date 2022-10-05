#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_list- search for a value using jump search
 * @list: pointer to the linked list
 * @size: number of node in the list
 * @value: the value to search for
 * Return: pointer to the first node(success) or NULL(failure)
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t m = (int)floor(sqrt(size)), index = 0, i;

	listint_t *temp = list;

	while (temp && list->n < value)
	{
		index += m;
		temp = temp->next;
	}
	while (i <= index - m)
	{
		list = list->next;
		i++;
	}
	while (i <= index && i < size)
	{
		if (list->n == value)
			return (list);
		list = list->next;
		i++;
	}
	return (NULL);


}

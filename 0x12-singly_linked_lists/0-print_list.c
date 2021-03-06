#include "lists.h"
#include <stdio.h>
/**
 * print_list-prints all the elements
 * @h:pointer to the lists
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *list = h;

	size_t nn = 0;

	while (list != NULL)
	{
		printf("[%d] ", list->len);
		if (list->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", list->str);
		list = list->next;

		nn++;
	}
	return (nn);
}

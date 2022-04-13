#include "function_pointers.h"
/**
 * int_index-search for integer
 * @array:the list
 * @size:size of the array
 * @cmp:pointer to function to compare values
 * Return:integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return -1;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if(cmp(array[i]))
				return (i);
		}
	}
	return -1;

}

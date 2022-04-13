#include "function_pointers.h"
/**
 * array_iterator-executes a function given as a parameter
 * on each array elements
 * @array:the pointer to the array
 * @size:the size of the array
 * @action:function pointer
 * Return : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

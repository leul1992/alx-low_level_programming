#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search-searched for a value in linear form
 * @array: pointer to the array
 * @size: the number of elements in the array
 * @value: the value to be searched
 * Return: index of the value(success) or -1(failure)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (size > index)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}

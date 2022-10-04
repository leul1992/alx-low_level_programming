#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * jump_search- searches for a value in jump search
 * @array: the pointer to the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: index of the value(success) or -1(failure)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = (int)floor(sqrt(size)), index = 0, i;

	if (!array)
		return (-1);
	while (array[index] < value && array && index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index,
				array[index]);
		index += m;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			index - m, index);
	i = index - m;
	while (i <= index && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

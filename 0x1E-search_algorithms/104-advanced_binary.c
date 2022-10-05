#include <stdio.h>
#include <math.h>
/**
 * advanced_binary- search for value using binary search
 * @array: pointer to the array list
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of value(success) or -1(failure)
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t first = 0, last = size, mid, i;

	if (!array)
		return (-1);
	while (first < last)
	{
		mid = floor((first + last) / 2);
		printf("Searching in array: ");
		for (i = first; i < last; i++)
		{
			if (i == last - 1)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] < value)
			first = mid + 1;
		else
			last = mid;
	}
	if (first < size)
		return (first);
	return (-1);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search- search for value using binary search
 * @array: pointer to the array list
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of value(success) or -1(failure)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, last = size - 1, mid, i;

	if (!array)
		return (-1);
	while (first <= last)
	{
		mid = (first + last) / 2;
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			if (i == last)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}

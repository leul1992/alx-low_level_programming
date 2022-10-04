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

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			if (i == last)
				printf("%ld\n", i);
			else
				printf("%ld, ", i);
		}
		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}

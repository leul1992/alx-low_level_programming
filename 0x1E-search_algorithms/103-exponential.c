#include <stdio.h>
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
/**
 * exponential_search- searches for a value using Exponential search
 * @array: the pointer to the array
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: index to the value(success) or -1(failure)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, first, last;
	int binary_res;

	if (size == 0 || !array)
		return (-1);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	first = bound / 2;
	if (bound >= size)
	{
		bound = size - 1;
	}

	last = bound;
	printf("Value found between indexes [%ld] and [%ld]\n", first, last);
	binary_res = binary_search(&array[first], last - first + 1, value);
	if (binary_res == -1)
		return (-1);
	return (binary_res + first);
}

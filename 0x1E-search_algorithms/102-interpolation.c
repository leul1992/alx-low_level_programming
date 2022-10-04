#include <stdio.h>
#include <stdlib.h>
/**
 * interpolation_search- search for a value using interpolation search
 * @array: pointer to the array
 * @size: size of the array
 * @value: the value to search for
 * Return: index of the value(success) or -1(failure)
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	while (array[high] != array[low] && value <= array[high] &&
			value >= array[low])
	{
		mid = low + ((value - array[low]) * (high - low)
				(array[high] - array[low]));
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if(array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	else
		return (-1;
}

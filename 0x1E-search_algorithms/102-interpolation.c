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
	size_t low = 0, high = size - 1;

	if (!array)
		return (-1);
	if (value > array[high])
	{
		size_t pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	while (array[high] != array[low] && value <= array[high] &&
			value >= array[low])
	{
		size_t pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
		return (low);
	else
		return (-1);
}

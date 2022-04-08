#include "main.h"
#include <stdlib.h>
/**
 * *array_range -  create an array of integers
 * @min: size of the array
 * @max: char to initialize
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);

	s = malloc((max - min + 1) * sizeof(int));

	if (s == 0)
		return (NULL);


	for (i = 0; min + i <= max; i++)
		s[i] = min + i;

	return (s);
}

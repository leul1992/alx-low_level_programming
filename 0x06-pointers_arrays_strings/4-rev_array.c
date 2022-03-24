#include "main.h"
/**
 * reverse_array-"reverse the entries of an array"
 * @a:the array
 * @n: the number of elements in the array
 * Return: the reverse
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
	return (a);
}

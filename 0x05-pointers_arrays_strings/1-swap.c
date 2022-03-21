#include "main.h"
/**
 * swap_int-"swap two integers"
 * @a:the first integer
 * @b:the second integer
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

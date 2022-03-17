#include "main.h"
/**
 * print_triangle-prints a triangle
 * @size:the size to print
 * Return: (0)
 */
void print_triangle(int size)
{
	int i;
	int j;
	int z;

	if (size > 0)
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size - 1; j++)
			_putchar(' ');
		for (z = 0; z < i + 1; z++)
			_putchar('#');
		_putchar('\n');
	}
	else
	_putchar('\n');
}

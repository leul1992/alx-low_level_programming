#include "main.h"
/**
 * print_square-"prints square of #"
 * @size:gets the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i != size - 1)
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

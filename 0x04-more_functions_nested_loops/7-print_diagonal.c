#include "main.h"
/**
 * print_diagonal-"draw a diagonal line"
 * @n:number of backward slash
 * Return: (void)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('$');
		}
	}
	else
		_putchar('$');
	_putchar('\n');
}

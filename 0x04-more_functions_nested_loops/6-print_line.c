#include "main.h"
/**
 * print_line-"prints line"
 * @n: the number dashes of the line
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

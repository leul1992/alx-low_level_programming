#include "main.h"
/**
 * more_numbers-"print 0-14 10X"
 * Return: (0)
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 15)
		{
			_putchar('0' + j);
			j++;
		}
		i++;
	}
	_putchar('\n');
}

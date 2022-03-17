#include "main.h"
/**
 * more_numbers-"print 0-14 10X"
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int tmp;

	j = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			tmp = j;
			if (j > 9)
			{
				_putchar('1');
				tmp = j % 10;
			}
			_putchar('0' + tmp);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

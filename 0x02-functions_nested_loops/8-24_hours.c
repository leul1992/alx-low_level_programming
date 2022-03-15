#include"main.h"
/**
 * jack_bauer-"Print every minute of a day"
 * Return: every minute of a day
 */
void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	while (h1 < 3)
	{
		int ch = 10;

		if (h1 == 2)
			ch = 4;
		while (h2 < ch)
		{
			while (m1 < 60)
			{
				while (m2 < 10)
				{
				_putchar('0' + h1);
				_putchar('0' + h2);
				_putchar(':');
				_putchar('0' + m1);
				_putchar('0' + m2);
				_putchar('\n');
				m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}

#include"main.h"
/**
 * jack_bauer-"Print every minute of a day"
 * Return: every minute of a day
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int ch = 10;

	h1 = 0;
	while (h1 < 3)
	{
		if (h1 == 2)
			ch = 4;
		h2 = 0;
		while (h2 < ch)
		{
			m1 = 0;
			while (m1 < 6)
			{
				m2 = 0;
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

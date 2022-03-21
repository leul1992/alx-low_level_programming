#include <stdio.h>
/**
 * puts_half-"print the second half of the string"
 * @str: the string
 * Return: (0)
 */
void puts_half(char *str)
{
	int i;
	int n;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;
	for (j = n + 1; j < i; j++)
		putchar(str[j]);
	putchar('\n');
}

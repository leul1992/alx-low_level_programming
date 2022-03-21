#include <stdio.h>
/**
 * print_rev-"print string in reverse"
 * @s:the string to print
 * Return:(0)
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	for (; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}

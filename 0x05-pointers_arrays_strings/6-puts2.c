#include <stdio.h>
/**
 * puts2-"print every other character"
 * @str:the string
 * Return:(0)
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
			break;
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

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
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

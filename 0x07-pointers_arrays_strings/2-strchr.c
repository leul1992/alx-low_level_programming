/**
 * _strchr-"locate a character"
 * @s:"the string to locate a character"
 * @c:"the character to be located"
 * Return: s (Success)
 * NULL (Failure)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');

}

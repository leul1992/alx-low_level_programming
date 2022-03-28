/**
 * _strpbrk-search for string for any set of bytes
 * @s: the full string to be searched
 * @accept : the string with a byte to be search
 * Return: pointer to the first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return ('\0');
}

/**
 * _strspn-"gets the length of a prefix substring"
 * @s: the string
 * @accept: the characters to be checked
 * Return: number of bytes that exist
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int count = 0;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != ' ')
		{
		if (s[j] == accept[i])
			count++;
		j++;
		}
		i++;
	}
	return (count);
}

/**
 * replace-replaces the character
 * leet-encode string into 1337
 * @ch:character to be changed
 * @c:characters
 * Return:encoded character
 */
char replace(char ch)
{
	if (ch == 'a' || ch == 'A')
		ch = '4';
	else if (ch == 'e' || ch == 'E')
		ch = '3';
	else if (ch == 'o' || ch == 'O')
		ch = '0';
	else if (ch == 't' || ch == 'T')
		ch = '7';
	else if (ch == 'l' || ch == 'L')
		ch = '1';
	return (ch);
}
char *leet(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] == 'a' || c[i] == 'A' || c[i] == 'e' || c[i] == 'E' || c[i] == 'o' || c[i] == 'O' || c[i] == 't' || c[i] == 'T' || c[i] == 'l' || c[i] == 'L')
			c[i] = replace(c[i]);
	/*		c[i] = '4';
		else if (c[i] == 'e' || c[i] == 'E')
			c[i] = '3';
		else if (c[i] == 'o' || c[i] == 'O')
			c[i] = '0';
		else if (c[i] == 't' || c[i] == 'T')
			c[i] = '7';
		else if (c[i] == 'l' || c[i] == 'L')
			c[i] = '1';*/
		i++;
	}
	return (c);
}

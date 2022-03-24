/**
 * leet-encode string into 1337
 * @ch:character to be changed
 * @c:characters
 * Return:encoded character
 */
char *leet(char *c)
{
	int i = 0, j;
	char c1[] = "aeotl";
	char c2[] = "AEOTL";
	char c3[] = "43071";

	while (c[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (c[i] == c1[j] || c[i] == c2[j])
			{
				c[i] = c3[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}

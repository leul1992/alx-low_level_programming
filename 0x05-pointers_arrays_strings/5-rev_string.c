/**
 * rev_string-"reverse the string"
 * @s:the string
 * Return:(0)
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i > j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}

/**
 * _count-counts the number of char in string
 * @c: the character in pointer format
 * Return the length of string
 */
int _count(const char *c)
{
	int i = 0;

	while (c[i] != NULL)
	{
		i++;
	}
	return (i);
}

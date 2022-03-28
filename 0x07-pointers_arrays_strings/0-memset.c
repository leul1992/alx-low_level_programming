/**
 * _memset-"fill memory with constant byte"
 * @s:memory to be filled with constant
 * @b:the constant byte that is to be filled
 * @n:the number of bytes
 * Return : (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

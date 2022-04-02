/**
 * _memcpy-"copy memory area"
 * @dest:memory area to get the copy
 * @src:memory area to be copied
 * @n:the number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

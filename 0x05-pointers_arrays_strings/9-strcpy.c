/**
 * _strcpy-"copy a string"
 * @dest:copy here
 * @src:copy this
 * Return: (dest)
 */
char _strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strcpy-"copy a string"
 * @dest:copy here
 * @src:copy this
 * Return: (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

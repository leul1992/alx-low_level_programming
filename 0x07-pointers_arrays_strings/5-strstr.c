/**
 * _strstr-"locate a substring"
 * @haystack:string where the substring to be located
 * @needle:the substring to be located
 * Return:pointer of beginning of locating substring(Success)
 * NULL(Failure)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
	for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
}
return (0);
}

/**
 * _strstr-"locate a substring"
 * @haystack:string where the substring to be located
 * @needle:the substring to be located
 * Return:pointer of beginning of locating substring(Success)
 * NULL(Failure)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, check = 0, mark = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == ' ')
			mark = i + 1;
		if (haystack[i] == ' ' || check == 1)
		{
			if (check == 0 && needle[j] == ' ')
				return (&haystack[mark]);
		}
		else if (haystack[i] != needle[j])
		{
			check = 1;
		}
		i++;
		j++;
	}
	return ('\0');
}

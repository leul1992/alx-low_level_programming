/**
 * test_islower-"checks if the character is lowercase or not"
 * @c: The character to check
 *
 * Return: On Success (1).
 * On failure, (0) is returned
 */
int test_islower(char c)
{
	char ch = 'a';
	int count = 0;

	while (ch <= 'z')
	{
	if (c == ch)
		count++;
	}
	if (count == 1)
		return (1);
	else
		return (0);
}

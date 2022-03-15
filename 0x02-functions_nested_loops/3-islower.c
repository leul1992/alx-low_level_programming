/**
 * test_islower-"checks if the character is lowercase or not"
 * @c: The character to check
 *
 * Return: On Success (1).
 * On failure, (0) is returned
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}

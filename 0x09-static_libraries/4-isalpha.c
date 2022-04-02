/**
 * _isalpha-"checks alphabetic character"
 * @c: checks alphabet
 * Return: (1) if a letter
 * (0) if not a letter
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

/**
 * _atoi-"convert string to integer"
 * @s: the string to be converted
 * Return:(0)
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int num;

	i = 0;
	num = 0;
	sign = -1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10;
			num -= s[i] - '0';
		}
		i++;
	}
	num = num * sign;
	return (num);
}

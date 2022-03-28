/**
 * set_string-"set the value of a pointer to a char"
 * @s:the string to be set
 * @to:the destination to be set
 * Return:void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

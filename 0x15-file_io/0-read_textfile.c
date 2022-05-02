#include "main.h"
/**
 * read_textfile-read a text and prints it the standard output
 * @filename:the file name of the text to be printed
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t cin, cout;
	char *txt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
	{
		free(txt);
		return (0);
	}

	cout = read(fd, txt, letters);
	if (cout == -1)
		return (0);
	cin = write(STDOUT_FILENO, txt, cout);
	if (cin == -1 || cin != cout)
		return (0);
	free(txt);
	close(fd);
	return (cin);

}

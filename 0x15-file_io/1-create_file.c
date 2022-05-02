#include "main.h"
/**
 * create_file-create a file
 * @filename: the name of the file to be created
 * @text_content: the content of the text
 * Return: 1 (success) pr 0 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, rstat;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		rstat = write(fd, text_content, i);
		if (rstat == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

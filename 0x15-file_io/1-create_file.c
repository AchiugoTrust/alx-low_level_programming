#include "main.h"
/**
 * create_file - function that creates a  file
 * @filename: name of file
 * @text_content: file content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int s;
	int ts = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[ts])
		ts++;

	s = write(fd, text_content, ts);

	if (s < 0)
		return (-1);

	if (close(fd) < 0)
		return (-1);

	return (1);
}


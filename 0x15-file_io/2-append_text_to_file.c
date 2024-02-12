#include "main.h"
/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ts = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[ts])
		ts++;

	write(fd, text_content, ts);

	if (close(fd) < 0)
		return (-1);

	return (1);
}


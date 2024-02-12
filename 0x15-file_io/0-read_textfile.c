#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: file to read text from
 * @letters: number of bytes
 * Return: number of bytes or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nrd = read(fd, buf, letters);
	buf[nrd] = '\0';
	nwr = write(STDOUT_FILENO, buf, nrd);
	free(buf);
	if (close(fd) < 0)
		return (0);
	return (nwr);
}


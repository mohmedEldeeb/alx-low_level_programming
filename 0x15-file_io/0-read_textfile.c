#include "main.h"

/**
 * read_textfile - reads taxt from file exist
 *
 * @filename: filename
 * @letters: numbers
 *
 * Return: count or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t result, nrd;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	result = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (result);
}

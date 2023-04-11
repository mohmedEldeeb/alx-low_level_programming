#include "main.h"

/**
 * read_textfile - reads taxt from file
 *
 * @filename: filename
 * @letters: numbers
 *
 * Return: count letter or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, result;
	char *buf;

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

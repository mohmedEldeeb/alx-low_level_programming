#include "main.h"

/**
 * create_file - creates a file and add content
 *
 * @filename: filename
 * @text_content: writed to file.
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fwrite;
	int n;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	fwrite = write(fd, text_content, n);

	if (fwrite == -1)
		return (-1);

	close(fd);

	return (1);
}

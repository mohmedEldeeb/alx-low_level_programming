#include "main.h"

/**
 * append_text_to_file - appends text to file
 *
 * @filename: this is filename
 * @text_content: content add to file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fwriet, n;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		fwriet = write(fd, text_content, n);

		if (fwriet == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

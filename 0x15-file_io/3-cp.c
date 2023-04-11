#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int fd);

/**
 * create_buf - Allocates buffer.
 *
 * @file: file name
 *
 * Return: pointer to new buffer
 */

char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);

		exit(99);
	}

	return (buf);
}


/**
 * close_file - Closes file
 * @f_to_close: file to be closed.
 */

void close_file(int f_to_close)
{
	int c;

	c = close(f_to_close);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to_close);

		exit(100);
	}
}



/**
 * main - check code fore args student
 *
 * @argc: The number of args
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, f_w, f_r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buf(argv[2]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	from = open(argv[1], O_RDONLY);
	f_r = read(from, buffer, 1024);


	while (f_r > 0)
	{
		if (from == -1 || f_r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);

			free(buffer);
			exit(98);
		}

		f_w = write(to, buffer, f_r);

		if (to == -1 || f_w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);

			free(buffer);
			exit(99);
		}

		f_r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	}

	free(buffer);
	close_file(to);
	close_file(from);

	return (0);
}

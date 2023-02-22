#include <unistd.h>

/**
 * _putchar - is to writes the character c to stdout and get output
 *
 * Return: alwes return On success 1 char
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

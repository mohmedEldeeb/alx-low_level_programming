#include "main.h"

/**
 * _strlen - function get string length
 *
 * @s: any string
 * Return: number of tring
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}

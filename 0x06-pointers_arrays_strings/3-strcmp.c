#include "main.h"

/**
 * _strcmp - function to comper tow string
 *
 * @s1: pram own to comper
 * @s2: pram to to comper
 *
 * Return: number
 */

int _strcmp(char *s1, char *s2)
{
	do {
		s1++;
		s2++;
	} while ((*s1 && *s2) && (*s1 && *s2));

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);

}

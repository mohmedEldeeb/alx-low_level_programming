#include "main.h"

/**
 * _strncpy - function to return somthing
 *
 * @dest: pram own one to the function
 * @src: pram tow tack adres thing
 * @n: number to make something
 *
 * Return : char from somtiong
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = sec[i];
	return (dest);
}

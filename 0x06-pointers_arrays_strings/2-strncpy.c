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
	int x;

	for (x = 0; x < n && *(src + x); x++)
		*(dest + x) = *(src + x);

	for (; x < n; x++)
		*(dest + x) = '\0';

	return (dest);

}

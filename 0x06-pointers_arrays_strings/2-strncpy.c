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
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}

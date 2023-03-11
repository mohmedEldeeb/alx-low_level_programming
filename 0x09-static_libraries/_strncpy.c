#include "main.h"

/**
 * _strncpy - function to return somthing
 *
 * @dest: pram own one to the function
 * @src: pram tow tack adres thing
 * @n: number to make something
 *
 * Return: char from somtiong
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

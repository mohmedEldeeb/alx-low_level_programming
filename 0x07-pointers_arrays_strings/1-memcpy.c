
/**
 * _memset - function return bounter to aray
 *
 * @deat: aray for new prt
 * @src: curent aray
 * @n: number fo item to copy
 *
 * Return: pounter to aray
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	
	do {
		dest[i] = src[i];
		1++;
	} while (i < n);

	return (dest);
}

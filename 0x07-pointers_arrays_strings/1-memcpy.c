
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
	unsigned int i = 0;
	
	{
		dest[i] = src[i];
		i++;
	} while (i < n);

	return (dest);
}


/**
 * _memcpy - function return bounter to aray
 *
 * @dest: aray for new prt
 * @src: curent aray
 * @n: number fo item to copy
 *
 * Return: pounter to aray new
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

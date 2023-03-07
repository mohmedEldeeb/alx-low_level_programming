
/**
 * _memset - function to memset number
 *
 * @s: number to make thing i don'know
 * @b: ofcorse char we need
 * @n: bosteve number
 *
 * Return: char new
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);

}

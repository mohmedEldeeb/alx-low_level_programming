
/**
 * _strcat - function change string
 *
 * @dest: pram frist string
 * @src: pram scand string
 *
 * Return: array of char
 */



char *_strcat(char *dest, char *src)
{
	char *s = *dest;
	
	
	while (*dest != '\0')
		dest++;
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest ='\n';
	return (s);
}

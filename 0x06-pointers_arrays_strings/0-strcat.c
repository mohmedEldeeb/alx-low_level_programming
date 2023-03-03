
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

	int x, z;

	x = 0;
	z = 0;
	
	
	while (dest[x] != '\0')
		dest++;
	while (src[z] != 0)
	{
		dest = src;
		dest++;
		src++;
	}
	*dest ='\n';
	return (s);
}

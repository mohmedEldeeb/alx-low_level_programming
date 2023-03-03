
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
		x++;
	while (src[z] != 0)
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x] ='\0';

	return (dest);
}

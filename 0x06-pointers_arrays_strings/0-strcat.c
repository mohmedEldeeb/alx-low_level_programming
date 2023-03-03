
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
	int x = 0;
	int z = 0;
	int i;

	for (i = 0; dest[i] == '\0' ; i++)
	{
		x++;
	}
	for (i = 0; src[1] == '\0'; i++)
		z++;
	for (i = 0; i <= z; i++)
		dest[x + 1] = src[i];
	return (dest);

}

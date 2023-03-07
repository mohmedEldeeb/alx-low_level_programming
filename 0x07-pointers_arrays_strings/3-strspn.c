
/**
 * _strspn - function to commpier ottwen chre
 *
 * @s: refranct
 * @accept: scend pram to
 *
 * Return: number unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int z , x, y;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}

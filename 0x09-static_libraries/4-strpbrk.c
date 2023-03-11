/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first pramterte to finch
 *
 * @accept: matches one of the bytes, @NULL if no such byte
 *
 * Return: a pointer to byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return ('\0');
}


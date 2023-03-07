
/**
 * strchr - dunction string char
 *
 * @s: pram pounter to char
 * @c: char to pounter
 *
 * Return: for to this poinr=ter
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		} else
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);

	return (NULL);
}


/**
 * _strchr - dunction string char
 *
 * @s: pram pounter to char
 * @c: char to pounter
 *
 * Return: for to this poinr=ter
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

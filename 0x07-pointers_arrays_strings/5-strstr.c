
/**
 * _strstr - update  substring
 *
 * @haystack: this is string to search
 * @needle: this isfirst occurrence of the substring
 *
 * Return: a pointer to substring or @Null.
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0,
	    z = 0;

	while (haystack[x])
	{
		while (needle[z] && (haystack[x] == needle[0]))
		{
			if (haystack[x + z] == needle[z])
				z++;
			else
				break;
		}
		if (needle[z])
		{
			x++;
			z = 0;
		}
		else
			return (haystack + x);
	}
	return (0);

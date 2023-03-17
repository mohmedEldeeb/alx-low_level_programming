/**
 * malloc_checked - function to return pounter or 98 if null
 *
 * @b: lenth in momery
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);

}


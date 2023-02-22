#include "main.h"

/**
 * _isalpha - function tack pram
 *
 * @c: pram for function
 *
 * Return: this is return 0 value
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

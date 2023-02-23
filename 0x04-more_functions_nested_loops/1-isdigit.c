#include "main.h"

/**
 * _isdigit - function check number if from 1 to 9
 *
 * @c: pram imt
 *
 * Return: 1 if digit or 0 if alse
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)	
		return (1);
	else
		return (0);
}

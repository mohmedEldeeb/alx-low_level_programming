#include "main.h"

/**
 * Checker - checks the string if equle
 *
 * @str: pramas to be checked
 *
 * @len: pramas for the length
 *
 * @i: number
 *
 * Return: 1 or 1
 */

int Checker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (Checker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen - function to returns the length
 *
 * @s: the string
 *
 * Return: an integer number
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check pramas
 *
 * Return: 1 or  2
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen(s) - 1;

	return (Checker(s, length, i));
}

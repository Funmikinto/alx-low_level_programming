#include "main.h"

/**
 * is_palindrome - returns 1 if palindrome 0 if not
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of the string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function that checks the character recursively for palindrome
 * @s: string
 * @m: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int m, int len)
{
	if (*(s + m) != *(s + len - 1))
		return (0);
	if (m >= len)
		return (1);
	return (check_pal(s, m + 1, len - 1));
}

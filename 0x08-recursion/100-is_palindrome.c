#include "main.h"
/**
 * _strlen_recursion - print length of string
 * is_palindrome - checks to see if string is
 * palindrome
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s +1));
	return (0);
}
/**
 * Second function
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * Third function
 */
int is_palindrome(char *s)
{
	retuen (pal_checker(s, 0, _strlen_recursion(s) -1));
}

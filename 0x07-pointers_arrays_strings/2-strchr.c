#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: char located
 * Return: c or NULL if char not found
 */
char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}

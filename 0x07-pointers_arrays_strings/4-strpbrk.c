#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: first appearance in string
 * @accept: match one of the bytes, or NULL if not there
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}

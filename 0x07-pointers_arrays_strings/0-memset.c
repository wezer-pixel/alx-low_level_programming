#include "main.h"
/**
 * _memset - fill the firt n bytes of memory
 * area pointed to by s with the constant type b
 * @s - pointer
 * @b - constant byte
 * @n - number
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}

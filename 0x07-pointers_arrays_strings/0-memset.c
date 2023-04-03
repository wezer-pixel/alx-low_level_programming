#include "main.h"
/**
 * _memset - fill the firt n bytes of memory area
 * pointed to by s with the constant type b
 * @b: contant byte to fill memory area pointed by s
 * @s: pointer to the memory area
 * @n: number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
	s[a] = b;
	a++;
	}

	return (s);
}

#include "main.h"
/**
 * _memcpy - copies n bytes from memort area src
 * to memory area dest
 * @src: source
 * @n: number of bytes to copy
 * @dest: destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}

#include "main.h"
/**
 * _memcpy - copies n bytes from memort area src
 * to memory area dest
 * @src: source
 * @n: number of bytes to copy
 * @dest: destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strncpy - copies a string
 * @src: source of the string
 * @dest: destination
 * @n: length of the int
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}

#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *s1 = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s1);
}

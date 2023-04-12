#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	len1 = s1 != NULL ? strlen(s1) : 0;
	len2 = s2 != NULL ? strlen(s2) : 0;
	result = (char *)malloc(len1 + len2 + 1);

	if (!(s1 || s2))
	{
		return (NULL);
	}

	if (result == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		memcpy(result, s1, len1);
	}
	if (s2 != NULL)
	{
		memcpy(result + len1, s2, len2);
	}

	result[len1 + len2] = '\0';

	return (result);
}

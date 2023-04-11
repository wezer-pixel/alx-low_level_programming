#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies a string
 * @str: string to copy
 * Return: a pointer to the string or NULL if empty
 */
char *_strdup(cons char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t len = strlen(str);

	copy = (char *)malloc(len + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}

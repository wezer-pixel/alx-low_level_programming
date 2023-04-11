#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and
 * initializes i with a specific char
 * @size: size of the char
 * @c: initial value
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}

	return (array);
}
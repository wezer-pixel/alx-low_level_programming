#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: list to look at
 * @size: size of array
 * @cmp: pointer to function used to compare values
 * Return: index of 1st element which cmp does
 * not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

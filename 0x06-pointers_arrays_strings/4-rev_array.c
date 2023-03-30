#include "main.h"
/**
 * reverse_array - prints an array in reverse
 * @a: char
 * @n: number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1];
		a[n - 1 -i] = c;
	}
}

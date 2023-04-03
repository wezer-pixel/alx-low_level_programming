#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonal of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix col
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}

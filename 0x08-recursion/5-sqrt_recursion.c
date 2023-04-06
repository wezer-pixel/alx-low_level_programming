
#include "main.h"

/**
 * check - square root
 * @i:int
 * @j:int
 * Return: int
 */
int check(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}

/**
 * _sqrt_recursion - return sq root
 * @n: int
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

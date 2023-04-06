#include "main.h"
/**
 * _sqrt_recursion - returns Square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (x < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_recursion(x / 2) * 2 / (1 + _sqrt_recursion(x / 2)));
	}
}

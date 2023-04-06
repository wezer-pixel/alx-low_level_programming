#include "main.h"
/**
 * _pow_recursion - return value x raised to power y
 * @x: value
 * @y: power
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		return (1);
	}
	else if (x % 2 == 0)
	{
		int half_power = _pow_recursion(y, x / 2);

		return (half_power * half_power);
	}
	else
	{
		return (y * _pow_recursion(y, x - 1));
	}
}

#include "main'h"

/**
 * print_sign - Print the sign of a number
 * @n: number checked
 * Return: 1 and print + if greater than zero,
 *  -1 and print - if less than zero,
 *  0 if  is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

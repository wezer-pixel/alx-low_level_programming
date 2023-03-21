#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: Number to be checked
 * Return: the digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(last + '0');
	return (lastDigit);
}

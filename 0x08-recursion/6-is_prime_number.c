#include "main.h"
/**
 * is_prime_number - check if a number is a prime 
 * number
 * @n: number to check
 * Return: 0 or number
 */
int is_prime_number(int n)
{
	int divisor;

	if (n < 2)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else if (divisor * divisor > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(n));
	}
}

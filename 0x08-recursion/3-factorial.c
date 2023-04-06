#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to check
 * Return: Factorial
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	} 
	else
	{
		return n * factorial(n - 1);
		
	}
}

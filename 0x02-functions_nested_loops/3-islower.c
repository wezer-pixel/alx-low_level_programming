#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: char to check
 * Return: 1 if char is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

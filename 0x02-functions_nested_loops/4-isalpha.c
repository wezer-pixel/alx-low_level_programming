#include "main.h"

/**
 * _isalpha - checks for the char alphabet
 * @c: chr to be checked
 * Return: 1if char is lower or upper, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * is_palindrome - checks to see if string is
 * palindrome
 * @s: string
 * @Return: 1 if true, else 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len /2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}

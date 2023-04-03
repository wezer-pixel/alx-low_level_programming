#include "main.h"
/**
 * _strstr - Locates a ssubstring
 * @needle: Substring to be found
 * @haystack: String to search
 * Return: a pointer rothe substrin begin or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{

		if (haystack[a + b] == needle[b])
			b++;
		else
			break;
		}

		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}

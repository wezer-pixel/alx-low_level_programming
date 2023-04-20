#include "variadic_functions.h"
/**
 * print_strings - print separated strings passed to
 * program
 * @separator: separates the strings
 * @n: number of unnamed parameters
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator = NULL)
		deparator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		
		if(i < n -1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

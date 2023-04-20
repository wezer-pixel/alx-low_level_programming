#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *f;
	char *s;

	va_start(args, format);

	for (f = format; f && *f; f++)
	{
		switch (*f)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (f[1])
			printf(", ");
	}
	printf("\n");

	va_end(args);
}

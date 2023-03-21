#include <stdio.h>

/**
 * print_alphabet - Print alphabet in loewrcase followe
 * by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char  alpha;

	for (alpha = 'a'; alpha < 'z'; alpha++)
		putchar(alpha);

	putchar('\n');
}


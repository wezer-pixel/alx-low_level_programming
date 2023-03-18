#include <stdio.h>

/**
 * main - print 1 - 10,
 * only use putchar and without char variable
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

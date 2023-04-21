#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself
 * @ac: argc
 * @av: argv
 * Return: 0
 */

/**
 * print_opcodes - print opcodes of proaram
 * @a: address to main function
 * @n: number of bytes to print
 */
void print_opcodes(int n);

int main(int ac, char *av[])
{
	int n;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(av[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(n);
	return (0);
}

void print_opcodes(int n)
{
	int i = 0;
	char *ptr = (char *)&print_opcodes;

	for (i = 0; i < n; i++)
	{
		printf("%02x", *(ptr + 1) & 0xff);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

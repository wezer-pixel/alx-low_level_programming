#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on sucess, 1 on error
 */
int main(int argc, char **argv)
{
	int multi = 1;
	int i;

	if (argc < 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			multi *= atoi(argv[i]);
		}
		printf("%d\n", multi);
	}
	return (0);
}

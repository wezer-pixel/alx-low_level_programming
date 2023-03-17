#include <stdlib.h>
#include <time.h>

/**
 *main - Assign random num
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d, &n: is positive");
	}
	else
	{
	printf("%d, &n: is negative");
	}
	return (0);
}

#include <stdlib.h>
#include <stdtime.h>
#include <stdio.h>

/**
 * main - random value
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;

	if (j > 5)
	{
		printf("Last digit %d is %d is and is geater than 0\n", n, j);
	}
	if (j == 0)
	{
		printf("Last digit %d is %d is and is 0\n", n, j);
	}
	if (j < 6)
	{
		if (j < 0)
			printf("Last digit %d is %d and is less than 6 and not 0\n", n, j);
	}

	return (0);
}

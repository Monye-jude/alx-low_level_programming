#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5
 * up to 1023
 * Return: 0 for success
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

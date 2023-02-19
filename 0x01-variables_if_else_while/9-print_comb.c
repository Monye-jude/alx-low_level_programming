#include <stdio.h>

/**
* main - Write a program that prints all possible
* combinations of single-digit numbers.
*Return: 0 for success
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Write a program that prints all possible
* combinations of two two-digit numbers.
* The numbers should range from 0 to 99
*Return: 0 for success
*/
int main(void)
{
	int  p, q;

	for (p = 0; p <= 98; p++)
	{

	for (q = p + 1; q <= 99; q++)
	{
		putchar((p / 10) + '0');
		putchar((p % 10) + '0');
		putchar(' ');
		putchar((q / 10) + '0');
		putchar((q % 10) + '0');
		if (p == 98 && q == 99)
			continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

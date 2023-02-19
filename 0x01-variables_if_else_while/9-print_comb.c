#include <stdio.h>

/**
* main - Write a program that prints all possible
* combinations of single-digit numbers.
*Return: 0 for success
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	return (0);
}

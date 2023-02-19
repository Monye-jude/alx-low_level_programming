#include <stdio.h>

/**
* main - Write a program that prints all possible
* combinations of single-digit numbers.
*Return: 0 for success
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(' ,');
		}
	}
	return (0);
}

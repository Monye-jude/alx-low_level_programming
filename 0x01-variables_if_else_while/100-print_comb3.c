#include <stdio.h>

/**
* main - Write a program that prints all
* possible different combinations of two digits.
*
*Return: 0 for success
*/
int main(void)
{
	jnt d, p;

	for (d = '0'; d < '9'; d++)
	{

	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
		putchar(d);
		putchar(p);
		if (d == '8' && (p == '9')
		{
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	puchar('\n');
	return (0);
}

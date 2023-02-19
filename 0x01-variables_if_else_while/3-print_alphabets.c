#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: 0 for Success
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}

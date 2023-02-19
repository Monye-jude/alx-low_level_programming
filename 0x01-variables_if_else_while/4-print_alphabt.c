#include <stdio.h>

/**
 * main - Write a program that prints alphabet in lowercase
 * followed by a new line except q and e
 * Return: 0 for success
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
	}

	putchar('\n');
	return (0);
}

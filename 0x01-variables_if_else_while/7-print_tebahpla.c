#include <stdio.h>

/**
 * main - Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 * Return: 0 for success
 */
int main(void)
{
	char lr;

	for (lr = 'z'; lr >= 'a'; lr--)
		putchar(lr);

	putchar('\n');
	return (0);
}

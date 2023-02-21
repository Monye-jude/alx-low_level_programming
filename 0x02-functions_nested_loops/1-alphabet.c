#include "main.h"

/**
 * print_alphabet - prints alphabet
 * with custom header that I have created
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The number to be checked.
 * Return: Absolutr valute of a number, otherwise 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}

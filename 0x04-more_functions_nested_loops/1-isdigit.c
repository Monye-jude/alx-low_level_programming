#include "main.h"
/**
 * _isdigit - checkes if the no is b/n 0 to 9
 * @c: input number
 * Return: 1 if is a number (0 to 9), 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to be checked
 *
 * Return: 1 if the number is positive, -1 if the number is negative,
 * and 0 if the number is zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{_putchar(48);
	return (0);
	}
}

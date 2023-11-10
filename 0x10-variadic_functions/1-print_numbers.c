#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers with separators
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list ap;

	if (n == 0)
	{
	printf("\n");
	return;
	}

	va_start(ap, n);

	while (i--)
	{
	printf("%d", va_arg(ap, int));
	if (i > 0)
		printf("%s", separator ? separator : "");
	}

	printf("\n");

	va_end(ap);
}

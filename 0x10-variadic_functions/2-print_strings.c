#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with followed new line
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
	printf("\n");
	return;
	}

	va_start(ap, n);
	while (i--)
	{
	str = va_arg(ap, char *);
	printf("%s%s", str ? str : "(nil)", i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}

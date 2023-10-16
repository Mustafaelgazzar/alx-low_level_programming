#include "main.h"

/**
 * puts2 - Prints every other character of string,starting with first character
 *
 * @str: The input string.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}

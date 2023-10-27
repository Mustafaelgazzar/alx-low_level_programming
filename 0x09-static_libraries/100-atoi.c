#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int result = 0;
	int sign = 1;  /* Default positive sign */
	int digit_found = 0;  /* Flag to check if any digit was found */

	while (s[c])
	{
		if (s[c] == '-')
	{
		sign *= -1;  /* Handle negative sign */
	}
	while (s[c] >= '0' && s[c] <= '9')
	{
		digit_found = 1;
		result = (result * 10) + (s[c] - '0');
		c++;
	}
	if (digit_found)
	{
		break;
	}
		c++;
	}

	result *= sign;
	return (result);
}

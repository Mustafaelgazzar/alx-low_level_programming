#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte value to be set in each byte of the memory area.
 * @n: The number of bytes to be filled with 'b'.
 *
 * Return: A pointer to the memory area 's'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}

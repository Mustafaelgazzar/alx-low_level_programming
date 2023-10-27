#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *
 *@n: Length of source to be copied.
 *
 *@src: Sourse.
 *@dest: Memory area.
 *
 *Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr = 0;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}

#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Char type string
 * @src: Char type string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
	i++;
	dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

#include "main.h"

/**
 *_strlen - Checks the length of the string.
 *
 *@s: string to be checked
 *
 *Return: The length of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}

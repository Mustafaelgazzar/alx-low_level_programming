#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string parameter input
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char temp;

	/* Find string length without the null character */
	for (l = 0; s[l] != '\0'; ++l)
	;

	/* Swap the string by looping to half the string */
	for (i = 0; i < l / 2; i++) /* Use l instead of 1 */
	{
	temp = s[i];
	s[i] = s[l - 1 - i]; /* -1 because the array starts from 0 */
	s[l - 1 - i] = temp;
	}
}


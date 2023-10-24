#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string.
 *
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is found, a pointer to its first occurrence
 * in the haystack string. If the substring is not found, returns NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
	index = 0;

	if (haystack[index] == needle[index])
	{
		do {
		if (needle[index + 1] == '\0')
			return (haystack);

		index++;
		} while (haystack[index] == needle[index]);
	}
		haystack++;
	}
	return (NULL);
}

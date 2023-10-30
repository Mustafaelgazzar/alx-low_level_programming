#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - duplicates a string in memory
 * @str: string to be duplicated
 * Return: pointer to newly allocatd memory space
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	m = malloc((size * sizeof(*str)) + 1);

	if (m == NULL)
	{
	return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
		m[i] = '\0';
	}

	return (m);
}

#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: the character to print
 * Return: Number of characters written on success,-1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

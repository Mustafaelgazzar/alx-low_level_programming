#include <unistd.h>

/**
 *_putchar - writes the charachter c to stdout
 *@c: The charachter to print
 *Return: 1 on sucess, -1 on error
 *and ERROR is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

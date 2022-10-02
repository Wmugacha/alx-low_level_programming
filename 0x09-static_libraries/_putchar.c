#include <unistd.h>

/**
 * _putchar - writes _putchar the character c stdout
 * @c: The character to print
 *
 * Returns: on success 1
 *
 * On error, -1 is returned, and errno is set appropriately
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


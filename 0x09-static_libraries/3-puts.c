#include "main.h"

/**
 *_puts- funtion to print out string
 * @s: string being printed
 * Return: Always 0.
 */

void _puts(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 *_puts- funtion to print out string
 * @str: string being printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

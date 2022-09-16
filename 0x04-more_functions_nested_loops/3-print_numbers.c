#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9.
 *
 * Returns: always 0.
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}

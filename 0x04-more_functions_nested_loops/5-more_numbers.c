#include "main.h"

/**
 * more_numbers - function to prints 10 times the numbers, from 0 to 14.
 *
 * Return: always zero.
 */

void more_numbers(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar (j / 10 + '0');
			_putchar (j % 10 + '0');
		}
		_putchar ('\n');
	}
}

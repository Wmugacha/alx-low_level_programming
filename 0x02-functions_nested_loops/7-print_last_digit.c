#include "main.h"

/**
 * print_last_digit - funtion that prints the last digit of a number.
 * @d: parameter name.
 *
 * Return: 0
 */

int print_last_digit(int d)
{

	d = (d % 10);

	if (d < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}

#include "main.h"

/**
 * _isdigit - funtion that checks for a digit (0 through 9).
 * @c: character being checked.
 * Return: always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}

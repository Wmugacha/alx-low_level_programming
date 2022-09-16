#include "main.h"

/**
 * _isupper - function to check if c is uppercase.
 * @c: character being checked
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

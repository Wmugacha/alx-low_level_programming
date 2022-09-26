#include "main.h"

/**
 * _strchr - funtion that locates a character in a string.
 * @s: string
 * @c: character
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int position;

	for (position = 0; s[position] >= '\0'; position++)
	{
		if (s[position] == c)
			return (s + position);
	}
	return ('\0');
}

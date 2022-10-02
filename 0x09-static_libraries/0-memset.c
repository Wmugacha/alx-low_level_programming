#include "main.h"

/**
 * _memset - funtion that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constant byte.
 * @n: number of bytes.
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *memory = s;

	unsigned int ch;

	for (ch = 0; ch < n; ch++)
		memory[ch] = b;

	return (memory);
}

#include "main.h"

/**
 * dest - first memory area.
 * src - second memory area.
 * @n: number of bytes.
 * Return: Always zero.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *memdest = dest;
       	char *memsrc = src;

	unsigned int ch;

	for (ch = 0; ch < n; ch++)
		memdest[ch] = memsrc[ch];

	return (memdest);
}


#include "main.h"

/**
 * _strcat - funtion to concatenate two strings.
 * @dest: first string.
 * @src: seond string.
 * @n: bytes to be used.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n && src[i] != '\0'; i++)
		dest(dest[i] + 1) = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}	

	return (dest);
}

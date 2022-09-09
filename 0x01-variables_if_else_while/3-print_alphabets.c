#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char abz[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(abz[i]);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion of a program that prints all arguments it receives.
 * @argc: size of argv array.
 * @argv: sting array.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}

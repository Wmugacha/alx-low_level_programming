#include <stddef.h>
#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);

#endif /*_FUNTION_POINTERS_*/

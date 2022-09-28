#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s - the pointer
 * @b - the constant byte
 * @n - the size of the memory area
 * return - s (if successful)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;
	for(n = 0; n < 10; n++);
	{
		*(s + n) = b;
	}
	return(s);
}

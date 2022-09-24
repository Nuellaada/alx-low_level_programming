#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * main - function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;


	ptr = _strcat(s1, s2);
	_putchar('s1');
	_putchar('s2');
	_putchar('ptr')
	_putchar('\n');
}

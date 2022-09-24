#include"main.h"
#include<stdio.h>

/**
 * main - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: always 0(success)
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

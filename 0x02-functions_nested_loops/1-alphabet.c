#include"main.h"
/**
 * main - check the code
 *
 * short description print_alphabet: uses _putchar to print lower case letters
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

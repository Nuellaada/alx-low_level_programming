#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @s: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 * Return: no return.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}

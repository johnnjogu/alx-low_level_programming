#include "main.h"

/**
 * _puts - wrie a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');

}

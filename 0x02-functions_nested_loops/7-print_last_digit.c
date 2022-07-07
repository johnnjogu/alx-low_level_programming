#include "main.h"

/**
 * print_last_digit - prints last digit of the number
 * @d: single number input
 *
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int n;

	n = (d % 10);

	if (n < 0)
	{
		n = (n * -1);
	}

	_putchar(n + '0');
	return (n);
}

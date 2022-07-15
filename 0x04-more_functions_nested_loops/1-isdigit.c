#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 * @c: single character count
 *
 * Return: 1 if digit is between 0-9 & 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}

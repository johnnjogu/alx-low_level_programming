#include "main.h"

/**
 * _strncpy - a function that copys the string
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, 1 = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;

		src++
	}

	srclen++;

	if (n > srclen)
		n = srclen;
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);

}

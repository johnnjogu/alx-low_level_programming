#include"main.h"

/**
 * _isalpha - checkes for alphabetical letters
 * @c: a character to check
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

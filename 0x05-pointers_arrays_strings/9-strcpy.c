/**
 * _strcpy - a function that copies the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *holder = dest;

	while (*src)

		*dest++ = *src++;
	return (holder);
}

#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, x2;

	for (x = 0; dest[x]; x++)
		;
	for (x2 = 0; x2 < n && src[x2] != '\0'; x2++)
		dest[x++] = src[x2];
	dest[x] = '\0';

	return (dest);
}

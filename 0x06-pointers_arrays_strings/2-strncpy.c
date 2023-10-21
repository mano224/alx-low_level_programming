#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && n != dest[x]; x++)
		dest[x] = src[n];
	for (x < n; dest[x] = '\0'; x++)
		;

		return (dest);
}

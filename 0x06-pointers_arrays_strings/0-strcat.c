#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x, x2;

	for (x = 0; dest[x]; x++)
		;
	for (x2 = 0; src[x2]; x2++)
		dest[x++] = src[x2];

	return (dest);
}

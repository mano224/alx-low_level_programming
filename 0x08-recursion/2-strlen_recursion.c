#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Return the length of a string
 * @s: pointer to the string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int ntr = 0;

	if (*s > '\0')
		ntr += _strlen_recursion(s + 1) + 1;
	return (ntr);
}

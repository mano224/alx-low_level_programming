#include "main.h"

/**
 * _isalpha - checks is character is a letter
 *            both lowercase or uppercase
 *
 * @c: takes input from other function.
 *
 * Return: returns input 1 if `c` is true
 *         otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

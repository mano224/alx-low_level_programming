#include "main.h"

/**
*_isupper-checks for uppercase character
*@c: function parameter
*Return: 1 on success and 0 on failure
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

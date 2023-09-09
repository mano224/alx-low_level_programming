#include <stdio.h>

/**
 * main -Enty point
 *
 * description: print all  alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char m = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main -Entry point
 *
 * description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'h';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			c++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

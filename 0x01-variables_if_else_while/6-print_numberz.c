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
	int d;

	for (d = 0 ; d <= 9 ; d++)
	{
		putchar(d + 48);
	}
	putchar('\n');

	return (0);
}

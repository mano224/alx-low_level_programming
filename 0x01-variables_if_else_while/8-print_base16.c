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
	int d = 48;

	while (d <= 102)
	{
		putchar(d);

		if (d == 57)
			digit += 39;
		d++;
	}
	putchar('\n');

	return (0);
}

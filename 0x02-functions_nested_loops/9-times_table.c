#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Example table
 * 0,0,0,0, ...
 * 0,1,2,3, ...
 *
 * put space if product is a single number
 * place the first digit if its two numbers
 */

void times_table(void)
{
	int i, j, reslut;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d, ", ressult);
			else
				printf("%2d", reslut);
			if (j != 9)
				printf(", ");
		}
		printf("/n");
	}
}

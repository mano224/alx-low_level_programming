#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		if (g != (n - 1))
			printf("%d, ", a[g]);
		else
			printf("%d", a[g]);
	}
	printf("\n");
}

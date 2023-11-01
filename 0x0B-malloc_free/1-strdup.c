#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	count++;
	}

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

for (i ; str[i] != '\0'; i++)
	       copy[i] = str[i];

return (copy);
}

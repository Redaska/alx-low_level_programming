#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		new[r] = str[r];
	}

	new[r] = '\0';

	return (new);
}

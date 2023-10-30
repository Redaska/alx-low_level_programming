#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one of concat
 * @s2: input two of concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, b;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	a = 0;
	b = 0;

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	conct = malloc(sizeof(char) * (a + b + 1));

	if (conct == NULL)
	{
		free(conct);
		return (NULL);
	}

	a = 0;
	b = 0;

	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		conct[a] = s2[b];
		a++;
		b++;
	}
	conct[a] = '\0';
	return (conct);
}

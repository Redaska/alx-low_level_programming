#include "main.h"

/**
 * print_alphabet - The entry point to a program that
 * prints all lower case letters using putchar function
 *
 * Return : Always 0 (success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

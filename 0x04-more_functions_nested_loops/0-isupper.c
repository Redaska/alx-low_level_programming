#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character (as an ASCII value) to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90) // ASCII values for uppercase A to Z
        return 1; // c is uppercase
    else
        return 0; // c is not uppercase
}

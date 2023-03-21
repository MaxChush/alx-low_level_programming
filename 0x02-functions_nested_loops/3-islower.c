#include "main.h"

/**
 * _islower - function to print lowercase
 * @c: The parameter to be prented
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

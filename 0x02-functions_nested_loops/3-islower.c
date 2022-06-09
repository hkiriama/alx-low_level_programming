#include "main.h"

/**
 * _islower - main function
 *
 * @c: parameter to compare whether lowercase
 *
 * Return: 1 if c is lower, otherwise 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

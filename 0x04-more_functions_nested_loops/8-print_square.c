#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: parameter
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

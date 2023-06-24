#include"main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space <= line; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

#include"main.h"
/**
 * print_triangle - print a triangle by size
 * @size: input of the triangle size
 * Return: Always 0
*/
void print_triangle(int size)
{
	int line, sim;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (sim = 1; sim <= size; line++)
			{
				if ((sim + line) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}

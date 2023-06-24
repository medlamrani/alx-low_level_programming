#include"main.h"
/**
 * print_triangle - print a triangle by size
 *
 * @size: input of the triangle size
 *
 * Return: Always 0
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a <= size; a++)
		{
			for (b = 0; b <= size; b++)
			{
				if ((a + b) <= size)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}

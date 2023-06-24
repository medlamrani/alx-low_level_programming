#include"main.h"
/**
 * print_triangle - print a triangle by size
 * @size: input of the triangle size
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
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((a + b) <= size)
				{
					putchar(' ');
				}
				else
				{
					putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}

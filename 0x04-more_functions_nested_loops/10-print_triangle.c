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
		putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (sim = 1; sim <= size; line++)
			{
				if ((sim + line) <= size)
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

#include"main.h"
/**
 * print_square - print a square
 * @size: the input for the size of the square
 * Return: Always return 0
*/

void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');
	else
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
}

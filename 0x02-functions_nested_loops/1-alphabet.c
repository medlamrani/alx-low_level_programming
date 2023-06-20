#include"main.h"
/**
 * main - Entry point
 * Description: print alphabet using prototype
 * print_alphabet - use _putchar function to print tha alphabet a - z
 * Return: Always 0
*/
void print_alphabet(void)
{
	int let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}

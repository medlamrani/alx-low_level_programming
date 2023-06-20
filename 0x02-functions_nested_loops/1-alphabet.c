#include"main.h"
/**
 * print_alphabet - use _putchar function to print tha alphabet a - z
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

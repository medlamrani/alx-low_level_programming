#include"main.h"
/**
 * print_alphabet_x10 - use _putchar function to print alphabet 10 time
*/
void print_alphabet_x10(void)
{
	int much = 0;
	int let;

	while (much < 10)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		much++;
		_putchar('\n');
	}
}

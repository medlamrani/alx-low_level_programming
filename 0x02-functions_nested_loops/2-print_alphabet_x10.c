#include"main.h"
/**
 *
*/
void print_alphabet_x10(void)
{
	int much = 0;
	int let;

	while (much <= 10)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}

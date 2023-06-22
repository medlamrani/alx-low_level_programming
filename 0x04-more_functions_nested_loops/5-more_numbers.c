#include"main.h"
/**
 * more_numbers - print numbers from 0 to 14
 * for 10 time
*/

void more_numbers(void)
{
	int much, num;

	for (much = 0; much <= 10; much++)
	{
		for (num = 0; num <= 14; num++)
		{
			putchar(num + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}


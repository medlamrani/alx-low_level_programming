#include"main.h"
/**
 * more_numbers - print numbers from 0 to 14
 * for 10 time
 *
 * Return: Always return 0
*/

void more_numbers(void)
{
	int much, num;

	for (much = 0; much < 10; much++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				putchar(num / 10 + '0');
			putchar(num % 10 + '0');
		}
		putchar('\n');
	}
}


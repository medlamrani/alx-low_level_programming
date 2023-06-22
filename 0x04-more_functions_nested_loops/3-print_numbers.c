#include"main.h"
/**
 * print_numbers - print numbers from 0 to 9
*/
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
}
